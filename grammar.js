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
    block: ($) => seq("{", repeat($._statement), "}"),

    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    macro_identifier: ($) => /[$][a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /\d+/,
    string: ($) => /"([^"\\]|\\.)*"/,
    type: ($) => choice(...TYPES),

    binary_operator: ($) =>
      choice("+", "-", "*", "/", "%", "&&", "||", "&", "|", "<<", ">>"),
    unary_operator: ($) => choice("!", "-"),
    comparison_operator: ($) => choice("==", "!=", "<", ">", "<=", ">="),
    type_annotation_operator: ($) => prec.left(2, ":"),
    assignment_operator: ($) => prec.right(choice(":", "=")),

    compound_assignment_operator: ($) =>
      seq($.binary_operator, $.assignment_operator),

    _statement: ($) =>
      seq(
        choice(
          $.while_statement,
          $.if_statement,
          $.return_statement,
          $.function_declaration_statement,
          $.variable_declaration_statement,
          $.variable_assignment_statement,
          $._expression_statement,
        ),
        optional(";"),
      ),

    _expression: ($) =>
      choice(
        $.number,
        $.identifier,
        $.string,
        $.binary_expression,
        $.unary_expression,
        $.call_expression,
      ),

    _expression_statement: ($) =>
      prec.right(
        seq(choice($.macro_expression, $.call_expression), optional(";")),
      ),

    parameters: ($) =>
      seq(
        $.identifier,
        optional(seq($.type_annotation_operator, $.type)),
        repeat(
          seq(
            ",",
            $.identifier,
            optional(seq($.type_annotation_operator, $.type)),
          ),
        ),
      ),

    arguments: ($) => seq($._expression, repeat(seq(",", $._expression))),

    // Statements

    function_declaration_statement: ($) =>
      prec(
        10,
        seq(
          field("name", $.identifier),
          $.type_annotation_operator,
          optional($.type),
          $.assignment_operator,
          "(",
          optional($.parameters),
          ")",
          optional(seq("->", $.type)),
          $.block,
        ),
      ),

    variable_declaration_statement: ($) =>
      prec(
        5,
        seq(
          $.identifier,
          $.type_annotation_operator,
          optional($.type),
          $.assignment_operator,
          $._expression,
        ),
      ),

    variable_assignment_statement: ($) =>
      seq(
        $.identifier,
        choice($.assignment_operator, $.compound_assignment_operator),
        $._expression,
      ),

    while_statement: ($) => seq("while", $._expression, $.block),

    if_statement: ($) =>
      seq(
        "if",
        $._expression,
        $.block,
        optional(repeat($.else_if_statement)),
        optional($.else_statement),
      ),

    else_if_statement: ($) => seq("elif", $._expression, $.block),

    else_statement: ($) => seq("else", $.block),

    return_statement: ($) => seq("return", $._expression),

    // Expressions

    binary_expression: ($) =>
      prec.right(
        seq(
          field("left", $._expression),
          choice($.binary_operator, $.comparison_operator),
          field("right", $._expression),
        ),
      ),

    unary_expression: ($) => prec.right(seq($.unary_operator, $._expression)),

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
  },
});
