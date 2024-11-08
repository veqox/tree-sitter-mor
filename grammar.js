/**
 * @file Mor grammar for tree-sitter
 * @author veqox
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const left_parenthesis = "(";
const right_parenthesis = ")";
const left_brace = "{";
const right_brace = "}";
const comma = ",";
const mutable_assignment_operator = "::";
const immutable_assignment_operator = ":=";

export default grammar({
  name: "mor",

  rules: {
    source_file: ($) => repeat($._statement),

    _statement: ($) => choice($.function_declaration, $.variable_declaration),

    assignment_operator: ($) =>
      choice(mutable_assignment_operator, immutable_assignment_operator),
    identifier: ($) => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: ($) => /\d+/,
    string: ($) => /"([^"\\]|\\.)*"/,

    function_declaration: ($) =>
      seq(field("identifier", $.identifier), $.assignment_operator, $.function_expression),

    function_expression: ($) =>
      seq(left_parenthesis, optional($.parameters), right_parenthesis, $.block),

    parameters: ($) => seq($.identifier, repeat(seq(comma, $.identifier))),

    block: ($) => seq(left_brace, repeat($._statement), right_brace),

    variable_declaration: ($) =>
      seq($.identifier, $.assignment_operator, $.expression),

    expression: ($) =>
      choice($.identifier, $.number, $.string, $.function_call),

    function_call: ($) =>
      seq(
        field("identifier", $.identifier),
        left_parenthesis,
        optional($.arguments),
        right_parenthesis,
      ),

    arguments: ($) => seq($.expression, repeat(seq(comma, $.expression))),
  },
});
