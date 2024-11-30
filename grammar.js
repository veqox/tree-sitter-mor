/**
 * @file Mor grammar for tree-sitter
 * @author veqox
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const TYPES = [
  "i8",
  "i16",
  "i32",
  "i64",
  "u8",
  "u16",
  "u32",
  "u64",
  "f8",
  "f16",
  "f32",
  "f64",
  "str",
  "!",
];

export default grammar({
  name: "mor",

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice($._expression_statement, $._declaration_statement, $.if_statement),

    _expression_statement: ($) => seq($._expression, ";"),

    _declaration_statement: ($) =>
      choice($.function_declaration, $.variable_declaration),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    macro_identifier: ($) => /[$][a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /\d+/,
    string: ($) => /"([^"\\]|\\.)*"/,

    assignment_operator: ($) => choice(":", "="),

    comparison_operator: ($) => choice("==", "!=", "<", ">", "<=", ">="),

    type: ($) => choice(...TYPES),

    function_declaration: ($) =>
      seq(
        field("name", $.identifier),
        $.assignment_operator,
        field("type", optional($.type)),
        $.assignment_operator,
        "(",
        field("parameters", $.parameters),
        ")",
        optional(seq("->", $.type)),
        $.block,
      ),

    parameters: ($) =>
      seq(
        $.identifier,
        optional(seq($.assignment_operator, $.type)),
        repeat(
          seq(
            ",",
            seq($.identifier, optional(seq($.assignment_operator, $.type))),
          ),
        ),
      ),

    block: ($) => seq("{", repeat($._statement), "}"),

    variable_declaration: ($) =>
      seq(
        field("name", $.identifier),
        $.assignment_operator,
        field("type", optional($.type)),
        $.assignment_operator,
        field("value", choice($._expression, $.number, $.string, $.identifier)),
        ";",
      ),

    _expression: ($) => choice($.call_expression, $.macro_expression),

    call_expression: ($) =>
      seq(
        field("name", $.identifier),
        "(",
        field("arguments", optional($.arguments)),
        ")",
      ),

    macro_expression: ($) =>
      seq(
        field("name", $.macro_identifier),
        "(",
        field("arguments", $.arguments),
        ")",
      ),

    arguments: ($) =>
      seq(
        choice($._expression, $.number, $.string, $.identifier),
        repeat(
          seq(",", choice($._expression, $.number, $.string, $.identifier)),
        ),
      ),

    comparison: ($) =>
      seq(
        choice($._expression, $.number, $.string, $.identifier),
        $.comparison_operator,
        choice($._expression, $.number, $.string, $.identifier),
      ),

    _condition: ($) => choice($._expression, $.comparison),

    if_statement: ($) =>
      seq(
        "if",
        $._condition,
        $.block,
        optional(choice($.else_if_statement, $.else_statement)),
      ),

    else_if_statement: ($) =>
      seq(
        "elif",
        $._condition,
        $.block,
        optional(choice($.else_if_statement, $.else_statement)),
      ),

    else_statement: ($) => seq("else", $.block),
  },
});
