#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 101
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_identifier = 3,
  sym_macro_identifier = 4,
  sym_number = 5,
  sym_string = 6,
  anon_sym_i8 = 7,
  anon_sym_i16 = 8,
  anon_sym_i32 = 9,
  anon_sym_i64 = 10,
  anon_sym_u8 = 11,
  anon_sym_u16 = 12,
  anon_sym_u32 = 13,
  anon_sym_u64 = 14,
  anon_sym_f8 = 15,
  anon_sym_f16 = 16,
  anon_sym_f32 = 17,
  anon_sym_f64 = 18,
  anon_sym_str = 19,
  anon_sym_BANG = 20,
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
  anon_sym_EQ_EQ = 32,
  anon_sym_BANG_EQ = 33,
  anon_sym_LT = 34,
  anon_sym_GT = 35,
  anon_sym_LT_EQ = 36,
  anon_sym_GT_EQ = 37,
  anon_sym_COLON = 38,
  anon_sym_EQ = 39,
  anon_sym_SEMI = 40,
  anon_sym_COMMA = 41,
  anon_sym_LPAREN = 42,
  anon_sym_RPAREN = 43,
  anon_sym_DASH_GT = 44,
  anon_sym_while = 45,
  anon_sym_if = 46,
  anon_sym_elif = 47,
  anon_sym_else = 48,
  anon_sym_return = 49,
  sym_source_file = 50,
  sym_block = 51,
  sym_type = 52,
  sym_binary_operator = 53,
  sym_unary_operator = 54,
  sym_comparison_operator = 55,
  sym_type_annotation_operator = 56,
  sym_assignment_operator = 57,
  sym_compound_assignment_operator = 58,
  sym__statement = 59,
  sym__expression = 60,
  sym__expression_statement = 61,
  sym_parameters = 62,
  sym_arguments = 63,
  sym_function_declaration_statement = 64,
  sym_variable_declaration_statement = 65,
  sym_variable_assignment_statement = 66,
  sym_while_statement = 67,
  sym_if_statement = 68,
  sym_else_if_statement = 69,
  sym_else_statement = 70,
  sym_return_statement = 71,
  sym_binary_expression = 72,
  sym_unary_expression = 73,
  sym_call_expression = 74,
  sym_macro_expression = 75,
  sym_bracket_expression = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_parameters_repeat1 = 78,
  aux_sym_arguments_repeat1 = 79,
  aux_sym_if_statement_repeat1 = 80,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [sym_macro_identifier] = "macro_identifier",
  [sym_number] = "number",
  [sym_string] = "string",
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
  [anon_sym_BANG] = "!",
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
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_while] = "while",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_return] = "return",
  [sym_source_file] = "source_file",
  [sym_block] = "block",
  [sym_type] = "type",
  [sym_binary_operator] = "binary_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_type_annotation_operator] = "type_annotation_operator",
  [sym_assignment_operator] = "assignment_operator",
  [sym_compound_assignment_operator] = "compound_assignment_operator",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym__expression_statement] = "_expression_statement",
  [sym_parameters] = "parameters",
  [sym_arguments] = "arguments",
  [sym_function_declaration_statement] = "function_declaration_statement",
  [sym_variable_declaration_statement] = "variable_declaration_statement",
  [sym_variable_assignment_statement] = "variable_assignment_statement",
  [sym_while_statement] = "while_statement",
  [sym_if_statement] = "if_statement",
  [sym_else_if_statement] = "else_if_statement",
  [sym_else_statement] = "else_statement",
  [sym_return_statement] = "return_statement",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_call_expression] = "call_expression",
  [sym_macro_expression] = "macro_expression",
  [sym_bracket_expression] = "bracket_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [sym_macro_identifier] = sym_macro_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
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
  [anon_sym_BANG] = anon_sym_BANG,
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
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_return] = anon_sym_return,
  [sym_source_file] = sym_source_file,
  [sym_block] = sym_block,
  [sym_type] = sym_type,
  [sym_binary_operator] = sym_binary_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_type_annotation_operator] = sym_type_annotation_operator,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_compound_assignment_operator] = sym_compound_assignment_operator,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym__expression_statement] = sym__expression_statement,
  [sym_parameters] = sym_parameters,
  [sym_arguments] = sym_arguments,
  [sym_function_declaration_statement] = sym_function_declaration_statement,
  [sym_variable_declaration_statement] = sym_variable_declaration_statement,
  [sym_variable_assignment_statement] = sym_variable_assignment_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_else_if_statement] = sym_else_if_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_macro_expression] = sym_macro_expression,
  [sym_bracket_expression] = sym_bracket_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
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
  [anon_sym_BANG] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_while] = {
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
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
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
  [sym_comparison_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type_annotation_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
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
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
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
  [sym_bracket_expression] = {
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
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_arguments = 1,
  field_left = 2,
  field_name = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
  [field_left] = "left",
  [field_name] = "name",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_arguments, 2},
    {field_name, 0},
  [3] =
    {field_left, 0},
    {field_right, 2},
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 23,
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 53,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 54,
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
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 62,
        '"', 3,
        '$', 9,
        '%', 68,
        '&', 71,
        '(', 86,
        ')', 87,
        '*', 66,
        '+', 63,
        ',', 85,
        '-', 65,
        '/', 67,
        ':', 81,
        ';', 84,
        '<', 77,
        '=', 83,
        '>', 78,
        'e', 37,
        'f', 16,
        'i', 17,
        'r', 31,
        's', 42,
        'u', 19,
        'w', 34,
        '{', 14,
        '|', 72,
        '}', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '!', 62,
        '"', 3,
        '%', 68,
        '&', 71,
        '(', 86,
        ')', 87,
        '*', 66,
        '+', 63,
        ',', 85,
        '-', 64,
        '/', 67,
        ':', 81,
        '<', 4,
        '=', 82,
        '>', 8,
        'f', 16,
        'i', 18,
        's', 42,
        'u', 19,
        '{', 14,
        '|', 72,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(62);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '(') ADVANCE(86);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '<') ADVANCE(73);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 8:
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 9:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 6,
        '$', 9,
        '%', 68,
        '&', 71,
        '(', 86,
        ')', 87,
        '*', 66,
        '+', 63,
        ',', 85,
        '-', 64,
        '/', 67,
        ':', 81,
        ';', 84,
        '<', 77,
        '=', 5,
        '>', 78,
        'i', 32,
        'r', 31,
        'w', 34,
        '{', 14,
        '|', 72,
        '}', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '$', 9,
        '-', 7,
        ';', 84,
        'e', 37,
        'i', 32,
        'r', 31,
        'w', 34,
        '{', 14,
        '}', 15,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(26);
      if (lookahead == '3') ADVANCE(20);
      if (lookahead == '6') ADVANCE(23);
      if (lookahead == '8') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(27);
      if (lookahead == '3') ADVANCE(21);
      if (lookahead == '6') ADVANCE(24);
      if (lookahead == '8') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '1') ADVANCE(28);
      if (lookahead == '3') ADVANCE(22);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '2') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '4') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '6') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 's') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_i16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_i32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_i64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_u8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_u16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_u32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_u64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_f8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_f16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_f32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_f64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(88);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_AMP);
      if (lookahead == '&') ADVANCE(69);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '|') ADVANCE(70);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '>') ADVANCE(74);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(75);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_while);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_return);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(45);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 11},
  [68] = {.lex_state = 11},
  [69] = {.lex_state = 11},
  [70] = {.lex_state = 11},
  [71] = {.lex_state = 11},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 12},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 12},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_macro_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
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
    [anon_sym_BANG] = ACTIONS(1),
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
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(94),
    [sym__statement] = STATE(25),
    [sym__expression_statement] = STATE(70),
    [sym_function_declaration_statement] = STATE(70),
    [sym_variable_declaration_statement] = STATE(70),
    [sym_variable_assignment_statement] = STATE(70),
    [sym_while_statement] = STATE(70),
    [sym_if_statement] = STATE(70),
    [sym_return_statement] = STATE(70),
    [sym_call_expression] = STATE(56),
    [sym_macro_expression] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_macro_identifier] = ACTIONS(7),
    [anon_sym_while] = ACTIONS(9),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(17), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(15), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [45] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(29), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(27), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [90] = 3,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 8,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(31), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [126] = 2,
    ACTIONS(39), 8,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(37), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [159] = 2,
    ACTIONS(43), 8,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(41), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [192] = 2,
    ACTIONS(47), 8,
      sym_identifier,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(45), 20,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [225] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(51), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [267] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(53), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(55), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [309] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(59), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [351] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(63), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [393] = 7,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_type_annotation_operator,
    STATE(87), 1,
      aux_sym_parameters_repeat1,
    ACTIONS(33), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 14,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
  [431] = 8,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(78), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [470] = 7,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [506] = 4,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(81), 3,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(77), 4,
      sym_number,
      sym_string,
      anon_sym_DASH,
      anon_sym_LPAREN,
    ACTIONS(79), 13,
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
  [536] = 7,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(68), 1,
      sym_block,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [572] = 7,
    ACTIONS(73), 1,
      anon_sym_LBRACE,
    STATE(52), 1,
      sym_block,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [608] = 6,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [642] = 6,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(42), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [675] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_COLON,
    ACTIONS(91), 1,
      anon_sym_EQ,
    STATE(21), 1,
      sym_type_annotation_operator,
    STATE(80), 1,
      sym_binary_operator,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    STATE(41), 2,
      sym_assignment_operator,
      sym_compound_assignment_operator,
    ACTIONS(19), 9,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [710] = 4,
    STATE(51), 1,
      sym_assignment_operator,
    STATE(85), 1,
      sym_type,
    ACTIONS(91), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(93), 14,
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
      anon_sym_BANG,
  [737] = 9,
    ACTIONS(97), 1,
      sym_identifier,
    ACTIONS(100), 1,
      sym_macro_identifier,
    ACTIONS(103), 1,
      anon_sym_while,
    ACTIONS(106), 1,
      anon_sym_if,
    ACTIONS(109), 1,
      anon_sym_return,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(56), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(70), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [774] = 9,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(56), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(70), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [810] = 9,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(23), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(56), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(70), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [846] = 9,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(56), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(70), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [882] = 9,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(27), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(56), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(70), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [918] = 9,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_while,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(13), 1,
      anon_sym_return,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
    STATE(22), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(56), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(70), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [954] = 2,
    STATE(93), 1,
      sym_type,
    ACTIONS(93), 14,
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
      anon_sym_BANG,
  [974] = 2,
    STATE(82), 1,
      sym_type,
    ACTIONS(93), 14,
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
      anon_sym_BANG,
  [994] = 2,
    STATE(89), 1,
      sym_type,
    ACTIONS(93), 14,
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
      anon_sym_BANG,
  [1014] = 2,
    STATE(91), 1,
      sym_type,
    ACTIONS(93), 14,
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
      anon_sym_BANG,
  [1034] = 2,
    STATE(92), 1,
      sym_type,
    ACTIONS(93), 14,
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
      anon_sym_BANG,
  [1054] = 8,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_unary_operator,
    STATE(98), 1,
      sym_parameters,
    ACTIONS(124), 2,
      sym_number,
      sym_string,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(19), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1085] = 1,
    ACTIONS(81), 14,
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
      anon_sym_BANG,
  [1102] = 8,
    ACTIONS(122), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_unary_operator,
    STATE(99), 1,
      sym_parameters,
    ACTIONS(124), 2,
      sym_number,
      sym_string,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(19), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1133] = 8,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_unary_operator,
    STATE(95), 1,
      sym_arguments,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_number,
      sym_string,
    STATE(13), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1164] = 7,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    STATE(96), 1,
      sym_arguments,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(136), 2,
      sym_number,
      sym_string,
    STATE(13), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1192] = 6,
    ACTIONS(144), 1,
      anon_sym_elif,
    ACTIONS(146), 1,
      anon_sym_else,
    STATE(61), 1,
      sym_else_statement,
    STATE(50), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(142), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1218] = 6,
    ACTIONS(144), 1,
      anon_sym_elif,
    ACTIONS(146), 1,
      anon_sym_else,
    STATE(57), 1,
      sym_else_statement,
    STATE(38), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(150), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1244] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(152), 2,
      sym_number,
      sym_string,
    STATE(16), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1269] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(154), 2,
      sym_number,
      sym_string,
    STATE(11), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1294] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(156), 2,
      sym_number,
      sym_string,
    STATE(2), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1319] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(158), 2,
      sym_number,
      sym_string,
    STATE(18), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1344] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(124), 2,
      sym_number,
      sym_string,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(19), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1369] = 6,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(160), 2,
      sym_number,
      sym_string,
    STATE(10), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1394] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(164), 2,
      sym_number,
      sym_string,
    STATE(3), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1419] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(166), 2,
      sym_number,
      sym_string,
    STATE(14), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1444] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(168), 2,
      sym_number,
      sym_string,
    STATE(17), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1469] = 6,
    ACTIONS(128), 1,
      anon_sym_LPAREN,
    ACTIONS(134), 1,
      sym_identifier,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(170), 2,
      sym_number,
      sym_string,
    STATE(9), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1494] = 4,
    ACTIONS(176), 1,
      anon_sym_elif,
    STATE(50), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(174), 5,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
  [1515] = 6,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(181), 1,
      anon_sym_LPAREN,
    STATE(46), 1,
      sym_unary_operator,
    ACTIONS(126), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(179), 2,
      sym_number,
      sym_string,
    STATE(8), 5,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
      sym_bracket_expression,
  [1540] = 2,
    ACTIONS(183), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(185), 6,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_return,
  [1555] = 2,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(189), 6,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_return,
  [1570] = 2,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(193), 6,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_return,
  [1585] = 2,
    ACTIONS(195), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(197), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1598] = 3,
    ACTIONS(203), 1,
      anon_sym_SEMI,
    ACTIONS(199), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
    ACTIONS(201), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1613] = 2,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(142), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1626] = 2,
    ACTIONS(205), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(207), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1639] = 2,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(211), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1652] = 2,
    ACTIONS(187), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(189), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1665] = 2,
    ACTIONS(213), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(215), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1678] = 1,
    ACTIONS(217), 8,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_LPAREN,
  [1689] = 2,
    ACTIONS(219), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(221), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1702] = 2,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(193), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1715] = 2,
    ACTIONS(223), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(225), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1728] = 2,
    ACTIONS(227), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(229), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1741] = 2,
    ACTIONS(231), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(233), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1754] = 2,
    ACTIONS(235), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(237), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1767] = 2,
    ACTIONS(239), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(241), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1780] = 3,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    ACTIONS(243), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
    ACTIONS(245), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1795] = 2,
    ACTIONS(249), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
    ACTIONS(251), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1807] = 1,
    ACTIONS(253), 6,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [1816] = 1,
    ACTIONS(255), 6,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [1825] = 1,
    ACTIONS(77), 6,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [1834] = 1,
    ACTIONS(257), 6,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [1843] = 1,
    ACTIONS(259), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1851] = 3,
    ACTIONS(65), 1,
      anon_sym_COLON,
    STATE(28), 1,
      sym_type_annotation_operator,
    ACTIONS(261), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1862] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(263), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_arguments_repeat1,
  [1872] = 3,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    ACTIONS(265), 1,
      anon_sym_COMMA,
    STATE(79), 1,
      aux_sym_parameters_repeat1,
  [1882] = 2,
    STATE(73), 1,
      sym_assignment_operator,
    ACTIONS(91), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1890] = 3,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(268), 1,
      anon_sym_DASH_GT,
    STATE(63), 1,
      sym_block,
  [1900] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(270), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_parameters_repeat1,
  [1910] = 3,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(272), 1,
      anon_sym_DASH_GT,
    STATE(67), 1,
      sym_block,
  [1920] = 3,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    ACTIONS(274), 1,
      anon_sym_DASH_GT,
    STATE(65), 1,
      sym_block,
  [1930] = 2,
    STATE(45), 1,
      sym_assignment_operator,
    ACTIONS(91), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1938] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_parameters_repeat1,
  [1948] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(278), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_parameters_repeat1,
  [1958] = 3,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(280), 1,
      anon_sym_COMMA,
    STATE(88), 1,
      aux_sym_arguments_repeat1,
  [1968] = 2,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(67), 1,
      sym_block,
  [1975] = 2,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
  [1982] = 2,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_block,
  [1989] = 2,
    ACTIONS(83), 1,
      anon_sym_LBRACE,
    STATE(69), 1,
      sym_block,
  [1996] = 1,
    ACTIONS(283), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2001] = 1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [2005] = 1,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [2009] = 1,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
  [2013] = 1,
    ACTIONS(291), 1,
      sym_identifier,
  [2017] = 1,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
  [2021] = 1,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
  [2025] = 1,
    ACTIONS(295), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 159,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 267,
  [SMALL_STATE(10)] = 309,
  [SMALL_STATE(11)] = 351,
  [SMALL_STATE(12)] = 393,
  [SMALL_STATE(13)] = 431,
  [SMALL_STATE(14)] = 470,
  [SMALL_STATE(15)] = 506,
  [SMALL_STATE(16)] = 536,
  [SMALL_STATE(17)] = 572,
  [SMALL_STATE(18)] = 608,
  [SMALL_STATE(19)] = 642,
  [SMALL_STATE(20)] = 675,
  [SMALL_STATE(21)] = 710,
  [SMALL_STATE(22)] = 737,
  [SMALL_STATE(23)] = 774,
  [SMALL_STATE(24)] = 810,
  [SMALL_STATE(25)] = 846,
  [SMALL_STATE(26)] = 882,
  [SMALL_STATE(27)] = 918,
  [SMALL_STATE(28)] = 954,
  [SMALL_STATE(29)] = 974,
  [SMALL_STATE(30)] = 994,
  [SMALL_STATE(31)] = 1014,
  [SMALL_STATE(32)] = 1034,
  [SMALL_STATE(33)] = 1054,
  [SMALL_STATE(34)] = 1085,
  [SMALL_STATE(35)] = 1102,
  [SMALL_STATE(36)] = 1133,
  [SMALL_STATE(37)] = 1164,
  [SMALL_STATE(38)] = 1192,
  [SMALL_STATE(39)] = 1218,
  [SMALL_STATE(40)] = 1244,
  [SMALL_STATE(41)] = 1269,
  [SMALL_STATE(42)] = 1294,
  [SMALL_STATE(43)] = 1319,
  [SMALL_STATE(44)] = 1344,
  [SMALL_STATE(45)] = 1369,
  [SMALL_STATE(46)] = 1394,
  [SMALL_STATE(47)] = 1419,
  [SMALL_STATE(48)] = 1444,
  [SMALL_STATE(49)] = 1469,
  [SMALL_STATE(50)] = 1494,
  [SMALL_STATE(51)] = 1515,
  [SMALL_STATE(52)] = 1540,
  [SMALL_STATE(53)] = 1555,
  [SMALL_STATE(54)] = 1570,
  [SMALL_STATE(55)] = 1585,
  [SMALL_STATE(56)] = 1598,
  [SMALL_STATE(57)] = 1613,
  [SMALL_STATE(58)] = 1626,
  [SMALL_STATE(59)] = 1639,
  [SMALL_STATE(60)] = 1652,
  [SMALL_STATE(61)] = 1665,
  [SMALL_STATE(62)] = 1678,
  [SMALL_STATE(63)] = 1689,
  [SMALL_STATE(64)] = 1702,
  [SMALL_STATE(65)] = 1715,
  [SMALL_STATE(66)] = 1728,
  [SMALL_STATE(67)] = 1741,
  [SMALL_STATE(68)] = 1754,
  [SMALL_STATE(69)] = 1767,
  [SMALL_STATE(70)] = 1780,
  [SMALL_STATE(71)] = 1795,
  [SMALL_STATE(72)] = 1807,
  [SMALL_STATE(73)] = 1816,
  [SMALL_STATE(74)] = 1825,
  [SMALL_STATE(75)] = 1834,
  [SMALL_STATE(76)] = 1843,
  [SMALL_STATE(77)] = 1851,
  [SMALL_STATE(78)] = 1862,
  [SMALL_STATE(79)] = 1872,
  [SMALL_STATE(80)] = 1882,
  [SMALL_STATE(81)] = 1890,
  [SMALL_STATE(82)] = 1900,
  [SMALL_STATE(83)] = 1910,
  [SMALL_STATE(84)] = 1920,
  [SMALL_STATE(85)] = 1930,
  [SMALL_STATE(86)] = 1938,
  [SMALL_STATE(87)] = 1948,
  [SMALL_STATE(88)] = 1958,
  [SMALL_STATE(89)] = 1968,
  [SMALL_STATE(90)] = 1975,
  [SMALL_STATE(91)] = 1982,
  [SMALL_STATE(92)] = 1989,
  [SMALL_STATE(93)] = 1996,
  [SMALL_STATE(94)] = 2001,
  [SMALL_STATE(95)] = 2005,
  [SMALL_STATE(96)] = 2009,
  [SMALL_STATE(97)] = 2013,
  [SMALL_STATE(98)] = 2017,
  [SMALL_STATE(99)] = 2021,
  [SMALL_STATE(100)] = 2025,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, 0, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, 0, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, 0, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, 0, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bracket_expression, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bracket_expression, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment_statement, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment_statement, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_annotation_operator, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation_operator, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [109] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [176] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 1, 0, 0),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 6, 0, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 6, 0, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 7, 0, 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 7, 0, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 9, 0, 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 9, 0, 1),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 8, 0, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 8, 0, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 10, 0, 1),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 10, 0, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_assignment_operator, 2, 0, 0),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [265] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 4, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
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
