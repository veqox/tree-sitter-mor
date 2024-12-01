#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 129
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 0
#define TOKEN_COUNT 58
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  sym_identifier = 2,
  sym_macro_identifier = 3,
  sym_number = 4,
  sym_string = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_PLUS_EQ = 8,
  anon_sym_DASH_EQ = 9,
  anon_sym_STAR_EQ = 10,
  anon_sym_SLASH_EQ = 11,
  anon_sym_PERCENT_EQ = 12,
  anon_sym_AMP_EQ = 13,
  anon_sym_PIPE_EQ = 14,
  anon_sym_EQ_EQ = 15,
  anon_sym_BANG_EQ = 16,
  anon_sym_LT = 17,
  anon_sym_GT = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_GT_EQ = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_PERCENT = 25,
  anon_sym_AMP_AMP = 26,
  anon_sym_PIPE_PIPE = 27,
  anon_sym_AMP = 28,
  anon_sym_PIPE = 29,
  anon_sym_LT_LT = 30,
  anon_sym_GT_GT = 31,
  anon_sym_BANG = 32,
  anon_sym_TILDE = 33,
  anon_sym_i8 = 34,
  anon_sym_i16 = 35,
  anon_sym_i32 = 36,
  anon_sym_i64 = 37,
  anon_sym_u8 = 38,
  anon_sym_u16 = 39,
  anon_sym_u32 = 40,
  anon_sym_u64 = 41,
  anon_sym_f8 = 42,
  anon_sym_f16 = 43,
  anon_sym_f32 = 44,
  anon_sym_f64 = 45,
  anon_sym_str = 46,
  anon_sym_LPAREN = 47,
  anon_sym_RPAREN = 48,
  anon_sym_DASH_GT = 49,
  anon_sym_COMMA = 50,
  anon_sym_LBRACE = 51,
  anon_sym_RBRACE = 52,
  anon_sym_if = 53,
  anon_sym_elif = 54,
  anon_sym_else = 55,
  anon_sym_while = 56,
  anon_sym_return = 57,
  sym_source_file = 58,
  sym__statement = 59,
  sym__declaration_statement = 60,
  sym__expression_statement = 61,
  sym_assignment_operator = 62,
  sym_comparison_operator = 63,
  sym_binary_operator = 64,
  sym_unary_operator = 65,
  sym_type = 66,
  sym_function_declaration = 67,
  sym_parameters = 68,
  sym_block = 69,
  sym_variable_declaration = 70,
  sym__expression = 71,
  sym_call_expression = 72,
  sym_macro_expression = 73,
  sym_number_expression = 74,
  sym_arguments = 75,
  sym_comparison = 76,
  sym__condition = 77,
  sym_if_statement = 78,
  sym_else_if_statement = 79,
  sym_else_statement = 80,
  sym_while_statement = 81,
  sym_return_statement = 82,
  aux_sym_source_file_repeat1 = 83,
  aux_sym_parameters_repeat1 = 84,
  aux_sym_arguments_repeat1 = 85,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [sym_macro_identifier] = "macro_identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_AMP_EQ] = "&=",
  [anon_sym_PIPE_EQ] = "|=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_i8] = "i8",
  [anon_sym_i16] = "i16",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_u8] = "u8",
  [anon_sym_u16] = "u16",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_f8] = "f8",
  [anon_sym_f16] = "f16",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_str] = "str",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym_assignment_operator] = "assignment_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_type] = "type",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_variable_declaration] = "variable_declaration",
  [sym__expression] = "_expression",
  [sym_call_expression] = "call_expression",
  [sym_macro_expression] = "macro_expression",
  [sym_number_expression] = "number_expression",
  [sym_arguments] = "arguments",
  [sym_comparison] = "comparison",
  [sym__condition] = "_condition",
  [sym_if_statement] = "if_statement",
  [sym_else_if_statement] = "else_if_statement",
  [sym_else_statement] = "else_statement",
  [sym_while_statement] = "while_statement",
  [sym_return_statement] = "return_statement",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [sym_macro_identifier] = sym_macro_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_AMP_EQ] = anon_sym_AMP_EQ,
  [anon_sym_PIPE_EQ] = anon_sym_PIPE_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_i16] = anon_sym_i16,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u16,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_f8] = anon_sym_f8,
  [anon_sym_f16] = anon_sym_f16,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_return] = anon_sym_return,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_type] = sym_type,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_block] = sym_block,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__expression] = sym__expression,
  [sym_call_expression] = sym_call_expression,
  [sym_macro_expression] = sym_macro_expression,
  [sym_number_expression] = sym_number_expression,
  [sym_arguments] = sym_arguments,
  [sym_comparison] = sym_comparison,
  [sym__condition] = sym__condition,
  [sym_if_statement] = sym_if_statement,
  [sym_else_if_statement] = sym_else_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_return_statement] = sym_return_statement,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_number_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_name = 2,
  field_parameters = 3,
  field_type = 4,
  field_value = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_arguments, 2},
    {field_name, 0},
  [3] =
    {field_name, 0},
    {field_value, 3},
  [5] =
    {field_name, 0},
    {field_type, 2},
    {field_value, 4},
  [8] =
    {field_name, 0},
    {field_parameters, 4},
  [10] =
    {field_name, 0},
    {field_type, 2},
  [12] =
    {field_name, 0},
    {field_parameters, 5},
    {field_type, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 9,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 2,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 39,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 45,
  [77] = 48,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 12,
  [82] = 82,
  [83] = 83,
  [84] = 29,
  [85] = 36,
  [86] = 27,
  [87] = 24,
  [88] = 25,
  [89] = 89,
  [90] = 82,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 117,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 118,
  [127] = 125,
  [128] = 124,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '!', 102,
        '"', 4,
        '$', 30,
        '%', 93,
        '&', 97,
        '(', 130,
        ')', 131,
        '*', 89,
        '+', 84,
        ',', 133,
        '-', 87,
        '/', 91,
        ':', 68,
        ';', 35,
        '<', 79,
        '=', 69,
        '>', 80,
        'e', 56,
        'f', 36,
        'i', 37,
        'r', 50,
        's', 61,
        'u', 38,
        'w', 53,
        '{', 134,
        '|', 98,
        '}', 135,
        '~', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(102);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '$') ADVANCE(30);
      if (lookahead == '(') ADVANCE(130);
      if (lookahead == ')') ADVANCE(131);
      if (lookahead == '-') ADVANCE(85);
      if (lookahead == '~') ADVANCE(103);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '!', 102,
        '%', 18,
        '&', 19,
        '*', 20,
        '+', 21,
        '-', 22,
        '/', 23,
        ':', 68,
        '=', 69,
        'f', 5,
        'i', 6,
        's', 29,
        'u', 7,
        '{', 134,
        '|', 24,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '!', 25,
        '%', 92,
        '&', 96,
        '(', 130,
        ')', 131,
        '*', 88,
        '+', 83,
        '-', 85,
        '/', 90,
        '<', 79,
        '=', 26,
        '>', 80,
        '{', 134,
        '|', 99,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(14);
      if (lookahead == '3') ADVANCE(8);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == '8') ADVANCE(120);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(15);
      if (lookahead == '3') ADVANCE(9);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == '8') ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(16);
      if (lookahead == '3') ADVANCE(10);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(112);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(108);
      END_STATE();
    case 10:
      if (lookahead == '2') ADVANCE(116);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(126);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(110);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(118);
      END_STATE();
    case 14:
      if (lookahead == '6') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(106);
      END_STATE();
    case 16:
      if (lookahead == '6') ADVANCE(114);
      END_STATE();
    case 17:
      if (lookahead == '<') ADVANCE(100);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 20:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 21:
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 25:
      if (lookahead == '=') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 30:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 31:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 32:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '!', 102,
        '$', 30,
        '%', 93,
        '&', 97,
        '(', 130,
        ')', 131,
        '*', 89,
        '+', 84,
        ',', 133,
        '-', 86,
        '/', 91,
        ':', 68,
        ';', 35,
        '<', 17,
        '=', 69,
        '>', 27,
        'i', 51,
        'r', 50,
        'w', 53,
        '{', 134,
        '|', 98,
        '}', 135,
        '~', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 33:
      if (eof) ADVANCE(34);
      ADVANCE_MAP(
        '!', 102,
        '$', 30,
        '-', 85,
        'e', 56,
        'i', 51,
        'r', 50,
        'w', 53,
        '}', 135,
        '~', 103,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(33);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(45);
      if (lookahead == '3') ADVANCE(39);
      if (lookahead == '6') ADVANCE(42);
      if (lookahead == '8') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(46);
      if (lookahead == '3') ADVANCE(40);
      if (lookahead == '6') ADVANCE(43);
      if (lookahead == '8') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(47);
      if (lookahead == '3') ADVANCE(41);
      if (lookahead == '6') ADVANCE(44);
      if (lookahead == '8') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead == 's') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_AMP_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PIPE_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '=') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(82);
      if (lookahead == '>') ADVANCE(101);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(70);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(71);
      if (lookahead == '>') ADVANCE(132);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(73);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(94);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '|') ADVANCE(95);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(95);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_f8);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_f8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_f16);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 32},
  [17] = {.lex_state = 32},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 32},
  [22] = {.lex_state = 33},
  [23] = {.lex_state = 33},
  [24] = {.lex_state = 32},
  [25] = {.lex_state = 32},
  [26] = {.lex_state = 32},
  [27] = {.lex_state = 32},
  [28] = {.lex_state = 32},
  [29] = {.lex_state = 32},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 32},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 32},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 32},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 32},
  [45] = {.lex_state = 33},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 33},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 32},
  [54] = {.lex_state = 32},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 32},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 32},
  [61] = {.lex_state = 32},
  [62] = {.lex_state = 32},
  [63] = {.lex_state = 32},
  [64] = {.lex_state = 32},
  [65] = {.lex_state = 32},
  [66] = {.lex_state = 32},
  [67] = {.lex_state = 32},
  [68] = {.lex_state = 32},
  [69] = {.lex_state = 32},
  [70] = {.lex_state = 32},
  [71] = {.lex_state = 32},
  [72] = {.lex_state = 32},
  [73] = {.lex_state = 32},
  [74] = {.lex_state = 32},
  [75] = {.lex_state = 32},
  [76] = {.lex_state = 32},
  [77] = {.lex_state = 32},
  [78] = {.lex_state = 32},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 3},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 3},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 3},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_macro_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_AMP_EQ] = ACTIONS(1),
    [anon_sym_PIPE_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_f8] = ACTIONS(1),
    [anon_sym_f16] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(121),
    [sym__statement] = STATE(5),
    [sym__declaration_statement] = STATE(5),
    [sym__expression_statement] = STATE(5),
    [sym_unary_operator] = STATE(117),
    [sym_function_declaration] = STATE(5),
    [sym_variable_declaration] = STATE(5),
    [sym__expression] = STATE(54),
    [sym_call_expression] = STATE(54),
    [sym_macro_expression] = STATE(54),
    [sym_number_expression] = STATE(54),
    [sym_if_statement] = STATE(5),
    [sym_while_statement] = STATE(5),
    [sym_return_statement] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_macro_identifier] = ACTIONS(7),
    [sym_number] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_TILDE] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_while] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(21), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(19), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_macro_identifier,
      sym_number,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [37] = 4,
    STATE(49), 1,
      sym_assignment_operator,
    STATE(79), 1,
      sym_type,
    ACTIONS(27), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
    ACTIONS(29), 14,
      anon_sym_BANG,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_f8,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
  [71] = 11,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(36), 1,
      sym_macro_identifier,
    ACTIONS(39), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_if,
    ACTIONS(48), 1,
      anon_sym_while,
    ACTIONS(51), 1,
      anon_sym_return,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(42), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(54), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
    STATE(4), 9,
      sym__statement,
      sym__declaration_statement,
      sym__expression_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [119] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(54), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
    STATE(4), 9,
      sym__statement,
      sym__declaration_statement,
      sym__expression_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [166] = 7,
    ACTIONS(58), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(60), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [205] = 7,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(66), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(68), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [244] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(70), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(54), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
    STATE(4), 9,
      sym__statement,
      sym__declaration_statement,
      sym__expression_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [291] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(54), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
    STATE(8), 9,
      sym__statement,
      sym__declaration_statement,
      sym__expression_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [338] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(74), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(54), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
    STATE(11), 9,
      sym__statement,
      sym__declaration_statement,
      sym__expression_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [385] = 11,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      sym_number,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(76), 1,
      anon_sym_RBRACE,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(54), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
    STATE(4), 9,
      sym__statement,
      sym__declaration_statement,
      sym__expression_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_source_file_repeat1,
  [432] = 1,
    ACTIONS(78), 23,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_BANG,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_f8,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
  [458] = 6,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_assignment_operator,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(23), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(25), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(80), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
  [494] = 6,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(84), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [530] = 6,
    ACTIONS(58), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(60), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(56), 6,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [566] = 6,
    ACTIONS(66), 1,
      anon_sym_SEMI,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(68), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(64), 6,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [602] = 5,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(84), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [635] = 7,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_comparison_operator,
    STATE(90), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(88), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [670] = 7,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_comparison_operator,
    STATE(90), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(88), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [705] = 5,
    STATE(90), 1,
      sym_binary_operator,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(19), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [735] = 7,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym_binary_operator,
    STATE(99), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [766] = 5,
    ACTIONS(102), 1,
      anon_sym_elif,
    ACTIONS(104), 1,
      anon_sym_else,
    STATE(65), 2,
      sym_else_if_statement,
      sym_else_statement,
    ACTIONS(100), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(98), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [792] = 5,
    ACTIONS(102), 1,
      anon_sym_elif,
    ACTIONS(104), 1,
      anon_sym_else,
    STATE(62), 2,
      sym_else_if_statement,
      sym_else_statement,
    ACTIONS(108), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(106), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [818] = 2,
    ACTIONS(112), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(110), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [838] = 2,
    ACTIONS(116), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(114), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [858] = 5,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(118), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [884] = 2,
    ACTIONS(122), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(120), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [904] = 6,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(82), 1,
      sym_binary_operator,
    STATE(99), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [932] = 2,
    ACTIONS(126), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(124), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [952] = 2,
    STATE(105), 1,
      sym_type,
    ACTIONS(29), 14,
      anon_sym_BANG,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_f8,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
  [972] = 2,
    STATE(104), 1,
      sym_type,
    ACTIONS(29), 14,
      anon_sym_BANG,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_f8,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
  [992] = 2,
    STATE(113), 1,
      sym_type,
    ACTIONS(29), 14,
      anon_sym_BANG,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_f8,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
  [1012] = 2,
    STATE(109), 1,
      sym_type,
    ACTIONS(29), 14,
      anon_sym_BANG,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_f8,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
  [1032] = 2,
    STATE(111), 1,
      sym_type,
    ACTIONS(29), 14,
      anon_sym_BANG,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_f8,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
  [1052] = 2,
    STATE(110), 1,
      sym_type,
    ACTIONS(29), 14,
      anon_sym_BANG,
      anon_sym_i8,
      anon_sym_i16,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_u8,
      anon_sym_u16,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_f8,
      anon_sym_f16,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_str,
  [1072] = 2,
    ACTIONS(21), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(19), 11,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [1092] = 8,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym_macro_identifier,
    ACTIONS(132), 1,
      sym_number,
    ACTIONS(134), 1,
      sym_string,
    STATE(122), 1,
      sym_unary_operator,
    STATE(114), 2,
      sym_comparison,
      sym__condition,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(80), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1123] = 5,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1148] = 9,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_number,
    ACTIONS(142), 1,
      sym_string,
    ACTIONS(144), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_unary_operator,
    STATE(127), 1,
      sym_arguments,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(92), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1181] = 8,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym_macro_identifier,
    ACTIONS(132), 1,
      sym_number,
    ACTIONS(134), 1,
      sym_string,
    STATE(122), 1,
      sym_unary_operator,
    STATE(112), 2,
      sym_comparison,
      sym__condition,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(80), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1212] = 4,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(118), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1235] = 9,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_number,
    ACTIONS(142), 1,
      sym_string,
    ACTIONS(146), 1,
      anon_sym_RPAREN,
    STATE(117), 1,
      sym_unary_operator,
    STATE(125), 1,
      sym_arguments,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(92), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1268] = 8,
    ACTIONS(128), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym_macro_identifier,
    ACTIONS(132), 1,
      sym_number,
    ACTIONS(134), 1,
      sym_string,
    STATE(122), 1,
      sym_unary_operator,
    STATE(108), 2,
      sym_comparison,
      sym__condition,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(80), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1299] = 4,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1321] = 2,
    ACTIONS(150), 6,
      sym_identifier,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1339] = 8,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(152), 1,
      sym_identifier,
    ACTIONS(154), 1,
      sym_number,
    ACTIONS(156), 1,
      sym_string,
    ACTIONS(158), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(56), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1369] = 5,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym_assignment_operator,
    STATE(97), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(80), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
  [1393] = 2,
    ACTIONS(166), 6,
      sym_identifier,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1411] = 8,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(168), 1,
      sym_identifier,
    ACTIONS(170), 1,
      sym_number,
    ACTIONS(172), 1,
      sym_string,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(60), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1441] = 8,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_number,
    ACTIONS(142), 1,
      sym_string,
    STATE(117), 1,
      sym_unary_operator,
    STATE(118), 1,
      sym_arguments,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(92), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1471] = 8,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(138), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_number,
    ACTIONS(142), 1,
      sym_string,
    STATE(117), 1,
      sym_unary_operator,
    STATE(126), 1,
      sym_arguments,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(92), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1501] = 7,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(176), 1,
      sym_identifier,
    ACTIONS(178), 1,
      sym_number,
    ACTIONS(180), 1,
      sym_string,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(78), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1528] = 3,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(25), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(23), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [1547] = 3,
    ACTIONS(184), 1,
      anon_sym_SEMI,
    ACTIONS(186), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1566] = 1,
    ACTIONS(188), 12,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [1581] = 3,
    ACTIONS(66), 1,
      anon_sym_SEMI,
    ACTIONS(68), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(64), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1600] = 7,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(192), 1,
      sym_number,
    ACTIONS(194), 1,
      sym_string,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(120), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1627] = 3,
    STATE(34), 1,
      sym_assignment_operator,
    ACTIONS(196), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
    ACTIONS(80), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
  [1646] = 7,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(200), 1,
      sym_number,
    ACTIONS(202), 1,
      sym_string,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
    STATE(107), 4,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
      sym_number_expression,
  [1673] = 3,
    ACTIONS(58), 1,
      anon_sym_SEMI,
    ACTIONS(60), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(56), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1692] = 2,
    ACTIONS(206), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(204), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1708] = 2,
    ACTIONS(210), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(208), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1724] = 2,
    ACTIONS(214), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(212), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1740] = 2,
    ACTIONS(218), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(216), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1756] = 2,
    ACTIONS(222), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(220), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1772] = 2,
    ACTIONS(226), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(224), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1788] = 2,
    ACTIONS(230), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(228), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1804] = 2,
    ACTIONS(234), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(232), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1820] = 2,
    ACTIONS(238), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(236), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1836] = 2,
    ACTIONS(242), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(240), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1852] = 2,
    ACTIONS(246), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(244), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1868] = 2,
    ACTIONS(250), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(248), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1884] = 2,
    ACTIONS(254), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(252), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1900] = 2,
    ACTIONS(258), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(256), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1916] = 2,
    ACTIONS(262), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(260), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1932] = 2,
    ACTIONS(150), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(148), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1948] = 2,
    ACTIONS(166), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(164), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1964] = 2,
    ACTIONS(84), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      sym_macro_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_RBRACE,
  [1980] = 2,
    STATE(46), 1,
      sym_assignment_operator,
    ACTIONS(27), 9,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_AMP_EQ,
      anon_sym_PIPE_EQ,
  [1995] = 4,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_comparison_operator,
    ACTIONS(88), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2012] = 1,
    ACTIONS(78), 8,
      sym_identifier,
      sym_macro_identifier,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
      anon_sym_LPAREN,
  [2023] = 4,
    STATE(36), 1,
      sym_number_expression,
    STATE(117), 1,
      sym_unary_operator,
    ACTIONS(264), 2,
      sym_identifier,
      sym_number,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
  [2039] = 1,
    ACTIONS(266), 7,
      sym_identifier,
      sym_macro_identifier,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
  [2049] = 2,
    ACTIONS(126), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(124), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [2061] = 2,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [2073] = 2,
    ACTIONS(122), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(120), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [2085] = 2,
    ACTIONS(112), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(110), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [2097] = 2,
    ACTIONS(116), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(114), 5,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [2109] = 3,
    STATE(57), 1,
      sym_comparison_operator,
    ACTIONS(88), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(86), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2123] = 4,
    STATE(85), 1,
      sym_number_expression,
    STATE(122), 1,
      sym_unary_operator,
    ACTIONS(268), 2,
      sym_identifier,
      sym_number,
    ACTIONS(11), 3,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
  [2139] = 1,
    ACTIONS(270), 5,
      sym_identifier,
      sym_number,
      anon_sym_DASH,
      anon_sym_BANG,
      anon_sym_TILDE,
  [2147] = 3,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    STATE(99), 1,
      aux_sym_arguments_repeat1,
  [2157] = 3,
    ACTIONS(196), 1,
      anon_sym_RPAREN,
    ACTIONS(272), 1,
      anon_sym_COMMA,
    STATE(93), 1,
      aux_sym_parameters_repeat1,
  [2167] = 3,
    ACTIONS(275), 1,
      anon_sym_DASH_GT,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block,
  [2177] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(279), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_parameters_repeat1,
  [2187] = 3,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
    STATE(123), 1,
      sym_parameters,
  [2197] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      aux_sym_parameters_repeat1,
  [2207] = 3,
    ACTIONS(118), 1,
      anon_sym_RPAREN,
    ACTIONS(287), 1,
      anon_sym_COMMA,
    STATE(98), 1,
      aux_sym_arguments_repeat1,
  [2217] = 3,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_RPAREN,
    STATE(98), 1,
      aux_sym_arguments_repeat1,
  [2227] = 3,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(292), 1,
      anon_sym_DASH_GT,
    STATE(63), 1,
      sym_block,
  [2237] = 3,
    ACTIONS(281), 1,
      sym_identifier,
    ACTIONS(294), 1,
      anon_sym_RPAREN,
    STATE(115), 1,
      sym_parameters,
  [2247] = 3,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(296), 1,
      anon_sym_DASH_GT,
    STATE(70), 1,
      sym_block,
  [2257] = 3,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    ACTIONS(298), 1,
      anon_sym_DASH_GT,
    STATE(66), 1,
      sym_block,
  [2267] = 3,
    ACTIONS(162), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      aux_sym_parameters_repeat1,
  [2277] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block,
  [2284] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(64), 1,
      sym_block,
  [2291] = 1,
    ACTIONS(118), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2296] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_block,
  [2303] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_block,
  [2310] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(74), 1,
      sym_block,
  [2317] = 1,
    ACTIONS(302), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [2322] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_block,
  [2329] = 2,
    ACTIONS(277), 1,
      anon_sym_LBRACE,
    STATE(71), 1,
      sym_block,
  [2336] = 2,
    ACTIONS(304), 1,
      anon_sym_LBRACE,
    STATE(23), 1,
      sym_block,
  [2343] = 1,
    ACTIONS(306), 1,
      anon_sym_RPAREN,
  [2347] = 1,
    ACTIONS(308), 1,
      sym_number,
  [2351] = 1,
    ACTIONS(310), 1,
      sym_number,
  [2355] = 1,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
  [2359] = 1,
    ACTIONS(314), 1,
      sym_identifier,
  [2363] = 1,
    ACTIONS(136), 1,
      anon_sym_LBRACE,
  [2367] = 1,
    ACTIONS(316), 1,
      ts_builtin_sym_end,
  [2371] = 1,
    ACTIONS(318), 1,
      sym_number,
  [2375] = 1,
    ACTIONS(320), 1,
      anon_sym_RPAREN,
  [2379] = 1,
    ACTIONS(322), 1,
      anon_sym_LPAREN,
  [2383] = 1,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
  [2387] = 1,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
  [2391] = 1,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
  [2395] = 1,
    ACTIONS(330), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 71,
  [SMALL_STATE(5)] = 119,
  [SMALL_STATE(6)] = 166,
  [SMALL_STATE(7)] = 205,
  [SMALL_STATE(8)] = 244,
  [SMALL_STATE(9)] = 291,
  [SMALL_STATE(10)] = 338,
  [SMALL_STATE(11)] = 385,
  [SMALL_STATE(12)] = 432,
  [SMALL_STATE(13)] = 458,
  [SMALL_STATE(14)] = 494,
  [SMALL_STATE(15)] = 530,
  [SMALL_STATE(16)] = 566,
  [SMALL_STATE(17)] = 602,
  [SMALL_STATE(18)] = 635,
  [SMALL_STATE(19)] = 670,
  [SMALL_STATE(20)] = 705,
  [SMALL_STATE(21)] = 735,
  [SMALL_STATE(22)] = 766,
  [SMALL_STATE(23)] = 792,
  [SMALL_STATE(24)] = 818,
  [SMALL_STATE(25)] = 838,
  [SMALL_STATE(26)] = 858,
  [SMALL_STATE(27)] = 884,
  [SMALL_STATE(28)] = 904,
  [SMALL_STATE(29)] = 932,
  [SMALL_STATE(30)] = 952,
  [SMALL_STATE(31)] = 972,
  [SMALL_STATE(32)] = 992,
  [SMALL_STATE(33)] = 1012,
  [SMALL_STATE(34)] = 1032,
  [SMALL_STATE(35)] = 1052,
  [SMALL_STATE(36)] = 1072,
  [SMALL_STATE(37)] = 1092,
  [SMALL_STATE(38)] = 1123,
  [SMALL_STATE(39)] = 1148,
  [SMALL_STATE(40)] = 1181,
  [SMALL_STATE(41)] = 1212,
  [SMALL_STATE(42)] = 1235,
  [SMALL_STATE(43)] = 1268,
  [SMALL_STATE(44)] = 1299,
  [SMALL_STATE(45)] = 1321,
  [SMALL_STATE(46)] = 1339,
  [SMALL_STATE(47)] = 1369,
  [SMALL_STATE(48)] = 1393,
  [SMALL_STATE(49)] = 1411,
  [SMALL_STATE(50)] = 1441,
  [SMALL_STATE(51)] = 1471,
  [SMALL_STATE(52)] = 1501,
  [SMALL_STATE(53)] = 1528,
  [SMALL_STATE(54)] = 1547,
  [SMALL_STATE(55)] = 1566,
  [SMALL_STATE(56)] = 1581,
  [SMALL_STATE(57)] = 1600,
  [SMALL_STATE(58)] = 1627,
  [SMALL_STATE(59)] = 1646,
  [SMALL_STATE(60)] = 1673,
  [SMALL_STATE(61)] = 1692,
  [SMALL_STATE(62)] = 1708,
  [SMALL_STATE(63)] = 1724,
  [SMALL_STATE(64)] = 1740,
  [SMALL_STATE(65)] = 1756,
  [SMALL_STATE(66)] = 1772,
  [SMALL_STATE(67)] = 1788,
  [SMALL_STATE(68)] = 1804,
  [SMALL_STATE(69)] = 1820,
  [SMALL_STATE(70)] = 1836,
  [SMALL_STATE(71)] = 1852,
  [SMALL_STATE(72)] = 1868,
  [SMALL_STATE(73)] = 1884,
  [SMALL_STATE(74)] = 1900,
  [SMALL_STATE(75)] = 1916,
  [SMALL_STATE(76)] = 1932,
  [SMALL_STATE(77)] = 1948,
  [SMALL_STATE(78)] = 1964,
  [SMALL_STATE(79)] = 1980,
  [SMALL_STATE(80)] = 1995,
  [SMALL_STATE(81)] = 2012,
  [SMALL_STATE(82)] = 2023,
  [SMALL_STATE(83)] = 2039,
  [SMALL_STATE(84)] = 2049,
  [SMALL_STATE(85)] = 2061,
  [SMALL_STATE(86)] = 2073,
  [SMALL_STATE(87)] = 2085,
  [SMALL_STATE(88)] = 2097,
  [SMALL_STATE(89)] = 2109,
  [SMALL_STATE(90)] = 2123,
  [SMALL_STATE(91)] = 2139,
  [SMALL_STATE(92)] = 2147,
  [SMALL_STATE(93)] = 2157,
  [SMALL_STATE(94)] = 2167,
  [SMALL_STATE(95)] = 2177,
  [SMALL_STATE(96)] = 2187,
  [SMALL_STATE(97)] = 2197,
  [SMALL_STATE(98)] = 2207,
  [SMALL_STATE(99)] = 2217,
  [SMALL_STATE(100)] = 2227,
  [SMALL_STATE(101)] = 2237,
  [SMALL_STATE(102)] = 2247,
  [SMALL_STATE(103)] = 2257,
  [SMALL_STATE(104)] = 2267,
  [SMALL_STATE(105)] = 2277,
  [SMALL_STATE(106)] = 2284,
  [SMALL_STATE(107)] = 2291,
  [SMALL_STATE(108)] = 2296,
  [SMALL_STATE(109)] = 2303,
  [SMALL_STATE(110)] = 2310,
  [SMALL_STATE(111)] = 2317,
  [SMALL_STATE(112)] = 2322,
  [SMALL_STATE(113)] = 2329,
  [SMALL_STATE(114)] = 2336,
  [SMALL_STATE(115)] = 2343,
  [SMALL_STATE(116)] = 2347,
  [SMALL_STATE(117)] = 2351,
  [SMALL_STATE(118)] = 2355,
  [SMALL_STATE(119)] = 2359,
  [SMALL_STATE(120)] = 2363,
  [SMALL_STATE(121)] = 2367,
  [SMALL_STATE(122)] = 2371,
  [SMALL_STATE(123)] = 2375,
  [SMALL_STATE(124)] = 2379,
  [SMALL_STATE(125)] = 2383,
  [SMALL_STATE(126)] = 2387,
  [SMALL_STATE(127)] = 2391,
  [SMALL_STATE(128)] = 2395,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expression, 3, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_expression, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(116),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 4, 0, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, 0, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, 0, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number_expression, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number_expression, 2, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, 0, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, 0, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 5),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, 0, 5),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 4, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 1),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, 0, 1),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 6),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, 0, 6),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 8, 0, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 7),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 8, 0, 7),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 9, 0, 5),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 9, 0, 5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 9, 0, 6),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 9, 0, 6),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 10, 0, 7),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 10, 0, 7),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(59),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 4, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [316] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mor(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
