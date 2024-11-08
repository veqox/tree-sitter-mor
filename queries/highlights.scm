(identifier) @variable

(assignment_operator) @operator
(comparison_operator) @operator

(function_declaration name: (identifier) @function)
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
  "i8"
  "str"
] @type

[
  "if"
  "elif"
  "else"
] @keyword
