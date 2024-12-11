(identifier) @variable

(assignment_operator) @operator
(type_annotation_operator) @operator
(comparison_operator) @operator
(binary_operator) @operator
(unary_operator) @operator

(function_declaration_statement name: (identifier) @function)
(call_expression name: (identifier) @function)
(macro_expression name: (macro_identifier) @function)

(parameters (identifier) @variable.parameter)

(string) @string

(number) @number

[
  "{"
  "}"
  "("
  ")"
] @punctuation.bracket

[
  ","
  ";"
] @punctuation.delimiter

[
  "if"
  "elif"
  "else"
  "return"
  "while"
] @keyword

(type) @keyword
