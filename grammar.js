/**
 * @file Mor grammar for tree-sitter
 * @author veqox
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const TYPES = ["i8", "str"];

export default grammar({
  name: "mor",

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) =>
      choice($._expression_statement, $._declaration_statement),

    _expression_statement: ($) => seq($._expression, ";"),

    _declaration_statement: ($) =>
      choice($.function_declaration, $.variable_declaration),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    macro_identifier: ($) => /[$][a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /\d+/,
    string: ($) => /"([^"\\]|\\.)*"/,

    assignment_operator: ($) => choice(":", "="),

    _type: ($) => choice(...TYPES),

    function_declaration: ($) =>
      seq(
        field("name", $.identifier),
        $.assignment_operator,
        field("type", optional($._type)),
        $.assignment_operator,
        "(",
        field("parameters", optional($.parameters)),
        ")",
        $.block,
      ),

    parameters: ($) =>
      seq(
        $.identifier,
        choice(seq($.assignment_operator, $._type)),
        repeat(
          seq(
            ",",
            seq($.identifier, choice(seq($.assignment_operator, $._type))),
          ),
        ),
      ),

    block: ($) => seq("{", repeat($._statement), "}"),

    variable_declaration: ($) =>
      seq(
        field("name", $.identifier),
        $.assignment_operator,
        field("type", optional($._type)),
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
  },
});
