/**
 * @file Mor grammar for tree-sitter
 * @author veqox
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "mor",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
