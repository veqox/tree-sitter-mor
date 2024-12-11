#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 98
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
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
  aux_sym_source_file_repeat1 = 76,
  aux_sym_parameters_repeat1 = 77,
  aux_sym_arguments_repeat1 = 78,
  aux_sym_if_statement_repeat1 = 79,
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
  [23] = 20,
  [24] = 21,
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 46,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 47,
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
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 11},
  [62] = {.lex_state = 11},
  [63] = {.lex_state = 11},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 12},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 12},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 12},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
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
    [sym_source_file] = STATE(92),
    [sym__statement] = STATE(22),
    [sym__expression_statement] = STATE(62),
    [sym_function_declaration_statement] = STATE(62),
    [sym_variable_declaration_statement] = STATE(62),
    [sym_variable_assignment_statement] = STATE(62),
    [sym_while_statement] = STATE(62),
    [sym_if_statement] = STATE(62),
    [sym_return_statement] = STATE(62),
    [sym_call_expression] = STATE(63),
    [sym_macro_expression] = STATE(63),
    [aux_sym_source_file_repeat1] = STATE(22),
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
    STATE(40), 2,
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
    STATE(40), 2,
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
  [192] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(40), 2,
      sym_binary_operator,
      sym_comparison_operator,
    ACTIONS(23), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(47), 4,
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
  [234] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(40), 2,
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
  [276] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(40), 2,
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
  [318] = 7,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(40), 2,
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
  [360] = 8,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(79), 1,
      aux_sym_arguments_repeat1,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(40), 2,
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
  [399] = 7,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(40), 2,
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
  [435] = 7,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym_block,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(40), 2,
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
  [471] = 6,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(40), 2,
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
  [505] = 7,
    ACTIONS(65), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    STATE(40), 2,
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
  [541] = 4,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 3,
      sym_number,
      sym_string,
      anon_sym_DASH,
    ACTIONS(77), 3,
      anon_sym_BANG,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(75), 13,
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
  [570] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 1,
      anon_sym_COLON,
    ACTIONS(81), 1,
      anon_sym_EQ,
    STATE(19), 1,
      sym_type_annotation_operator,
    STATE(82), 1,
      sym_binary_operator,
    ACTIONS(21), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
    STATE(48), 2,
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
  [605] = 9,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_macro_identifier,
    ACTIONS(91), 1,
      anon_sym_while,
    ACTIONS(94), 1,
      anon_sym_if,
    ACTIONS(97), 1,
      anon_sym_return,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(62), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [642] = 4,
    STATE(35), 1,
      sym_assignment_operator,
    STATE(78), 1,
      sym_type,
    ACTIONS(81), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(100), 14,
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
  [669] = 9,
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
    ACTIONS(102), 1,
      anon_sym_RBRACE,
    STATE(21), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(62), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [705] = 9,
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
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(62), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [741] = 9,
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
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(18), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(62), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [777] = 9,
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
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(24), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(62), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [813] = 9,
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
    ACTIONS(110), 1,
      anon_sym_RBRACE,
    STATE(18), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(63), 2,
      sym_call_expression,
      sym_macro_expression,
    STATE(62), 7,
      sym__expression_statement,
      sym_function_declaration_statement,
      sym_variable_declaration_statement,
      sym_variable_assignment_statement,
      sym_while_statement,
      sym_if_statement,
      sym_return_statement,
  [849] = 2,
    STATE(86), 1,
      sym_type,
    ACTIONS(100), 14,
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
  [869] = 2,
    STATE(80), 1,
      sym_type,
    ACTIONS(100), 14,
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
  [889] = 2,
    STATE(88), 1,
      sym_type,
    ACTIONS(100), 14,
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
  [909] = 2,
    STATE(90), 1,
      sym_type,
    ACTIONS(100), 14,
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
  [929] = 2,
    STATE(89), 1,
      sym_type,
    ACTIONS(100), 14,
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
  [949] = 1,
    ACTIONS(77), 14,
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
  [966] = 6,
    ACTIONS(116), 1,
      anon_sym_elif,
    ACTIONS(118), 1,
      anon_sym_else,
    STATE(52), 1,
      sym_else_statement,
    STATE(32), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(114), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [992] = 6,
    ACTIONS(116), 1,
      anon_sym_elif,
    ACTIONS(118), 1,
      anon_sym_else,
    STATE(55), 1,
      sym_else_statement,
    STATE(34), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(122), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1018] = 7,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      sym_unary_operator,
    STATE(94), 1,
      sym_arguments,
    ACTIONS(126), 2,
      sym_number,
      sym_string,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(11), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1045] = 4,
    ACTIONS(136), 1,
      anon_sym_elif,
    STATE(34), 2,
      sym_else_if_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(134), 5,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_else,
      anon_sym_return,
  [1066] = 6,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(139), 2,
      sym_number,
      sym_string,
    STATE(9), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1090] = 6,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    STATE(96), 1,
      sym_arguments,
    ACTIONS(126), 2,
      sym_number,
      sym_string,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    STATE(11), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1114] = 6,
    ACTIONS(124), 1,
      sym_identifier,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(143), 2,
      sym_number,
      sym_string,
    STATE(10), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1138] = 5,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(147), 2,
      sym_number,
      sym_string,
    STATE(13), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1159] = 5,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(149), 2,
      sym_number,
      sym_string,
    STATE(15), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1180] = 5,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(151), 2,
      sym_number,
      sym_string,
    STATE(2), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1201] = 5,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(153), 2,
      sym_number,
      sym_string,
    STATE(14), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1222] = 5,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(155), 2,
      sym_number,
      sym_string,
    STATE(3), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1243] = 5,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(157), 2,
      sym_number,
      sym_string,
    STATE(12), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1264] = 5,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(159), 2,
      sym_number,
      sym_string,
    STATE(8), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1285] = 2,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(163), 6,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_return,
  [1300] = 2,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(167), 6,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_return,
  [1315] = 2,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(171), 6,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_return,
  [1330] = 5,
    ACTIONS(124), 1,
      sym_identifier,
    STATE(42), 1,
      sym_unary_operator,
    ACTIONS(128), 2,
      anon_sym_BANG,
      anon_sym_DASH,
    ACTIONS(173), 2,
      sym_number,
      sym_string,
    STATE(7), 4,
      sym__expression,
      sym_binary_expression,
      sym_unary_expression,
      sym_call_expression,
  [1351] = 2,
    ACTIONS(175), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(177), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1364] = 2,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(167), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1377] = 2,
    ACTIONS(179), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(181), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1390] = 2,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(122), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1403] = 2,
    ACTIONS(183), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(185), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1416] = 2,
    ACTIONS(169), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(171), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1429] = 2,
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
  [1442] = 2,
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
  [1455] = 2,
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
  [1468] = 2,
    ACTIONS(199), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(201), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1481] = 2,
    ACTIONS(203), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(205), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1494] = 2,
    ACTIONS(207), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(209), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1507] = 2,
    ACTIONS(211), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
      anon_sym_SEMI,
    ACTIONS(213), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1520] = 3,
    ACTIONS(219), 1,
      anon_sym_SEMI,
    ACTIONS(215), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
    ACTIONS(217), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1535] = 3,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(221), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
    ACTIONS(223), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1550] = 2,
    ACTIONS(227), 3,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_macro_identifier,
    ACTIONS(229), 4,
      sym_identifier,
      anon_sym_while,
      anon_sym_if,
      anon_sym_return,
  [1562] = 1,
    ACTIONS(231), 7,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_COLON,
      anon_sym_EQ,
  [1572] = 1,
    ACTIONS(73), 6,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
      anon_sym_LPAREN,
  [1581] = 1,
    ACTIONS(233), 5,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
  [1589] = 1,
    ACTIONS(235), 5,
      anon_sym_LBRACE,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1597] = 1,
    ACTIONS(237), 5,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
  [1605] = 5,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(243), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      sym_type_annotation_operator,
    STATE(77), 1,
      aux_sym_parameters_repeat1,
  [1621] = 1,
    ACTIONS(245), 5,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_BANG,
      anon_sym_DASH,
  [1629] = 3,
    ACTIONS(239), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym_type_annotation_operator,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1640] = 3,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(249), 1,
      anon_sym_DASH_GT,
    STATE(61), 1,
      sym_block,
  [1650] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    STATE(74), 1,
      aux_sym_arguments_repeat1,
  [1660] = 3,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
    STATE(91), 1,
      sym_parameters,
  [1670] = 3,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(258), 1,
      anon_sym_DASH_GT,
    STATE(57), 1,
      sym_block,
  [1680] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameters_repeat1,
  [1690] = 2,
    STATE(37), 1,
      sym_assignment_operator,
    ACTIONS(81), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1698] = 3,
    ACTIONS(61), 1,
      anon_sym_COMMA,
    ACTIONS(262), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      aux_sym_arguments_repeat1,
  [1708] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(264), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      aux_sym_parameters_repeat1,
  [1718] = 3,
    ACTIONS(241), 1,
      anon_sym_COMMA,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
    STATE(83), 1,
      aux_sym_parameters_repeat1,
  [1728] = 2,
    STATE(69), 1,
      sym_assignment_operator,
    ACTIONS(81), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [1736] = 3,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    ACTIONS(268), 1,
      anon_sym_COMMA,
    STATE(83), 1,
      aux_sym_parameters_repeat1,
  [1746] = 3,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    ACTIONS(271), 1,
      anon_sym_DASH_GT,
    STATE(56), 1,
      sym_block,
  [1756] = 3,
    ACTIONS(254), 1,
      sym_identifier,
    ACTIONS(273), 1,
      anon_sym_RPAREN,
    STATE(95), 1,
      sym_parameters,
  [1766] = 2,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(57), 1,
      sym_block,
  [1773] = 2,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(60), 1,
      sym_block,
  [1780] = 2,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(58), 1,
      sym_block,
  [1787] = 1,
    ACTIONS(275), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1792] = 2,
    ACTIONS(67), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_block,
  [1799] = 1,
    ACTIONS(277), 1,
      anon_sym_RPAREN,
  [1803] = 1,
    ACTIONS(279), 1,
      ts_builtin_sym_end,
  [1807] = 1,
    ACTIONS(281), 1,
      sym_identifier,
  [1811] = 1,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
  [1815] = 1,
    ACTIONS(256), 1,
      anon_sym_RPAREN,
  [1819] = 1,
    ACTIONS(285), 1,
      anon_sym_RPAREN,
  [1823] = 1,
    ACTIONS(287), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 159,
  [SMALL_STATE(7)] = 192,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 276,
  [SMALL_STATE(10)] = 318,
  [SMALL_STATE(11)] = 360,
  [SMALL_STATE(12)] = 399,
  [SMALL_STATE(13)] = 435,
  [SMALL_STATE(14)] = 471,
  [SMALL_STATE(15)] = 505,
  [SMALL_STATE(16)] = 541,
  [SMALL_STATE(17)] = 570,
  [SMALL_STATE(18)] = 605,
  [SMALL_STATE(19)] = 642,
  [SMALL_STATE(20)] = 669,
  [SMALL_STATE(21)] = 705,
  [SMALL_STATE(22)] = 741,
  [SMALL_STATE(23)] = 777,
  [SMALL_STATE(24)] = 813,
  [SMALL_STATE(25)] = 849,
  [SMALL_STATE(26)] = 869,
  [SMALL_STATE(27)] = 889,
  [SMALL_STATE(28)] = 909,
  [SMALL_STATE(29)] = 929,
  [SMALL_STATE(30)] = 949,
  [SMALL_STATE(31)] = 966,
  [SMALL_STATE(32)] = 992,
  [SMALL_STATE(33)] = 1018,
  [SMALL_STATE(34)] = 1045,
  [SMALL_STATE(35)] = 1066,
  [SMALL_STATE(36)] = 1090,
  [SMALL_STATE(37)] = 1114,
  [SMALL_STATE(38)] = 1138,
  [SMALL_STATE(39)] = 1159,
  [SMALL_STATE(40)] = 1180,
  [SMALL_STATE(41)] = 1201,
  [SMALL_STATE(42)] = 1222,
  [SMALL_STATE(43)] = 1243,
  [SMALL_STATE(44)] = 1264,
  [SMALL_STATE(45)] = 1285,
  [SMALL_STATE(46)] = 1300,
  [SMALL_STATE(47)] = 1315,
  [SMALL_STATE(48)] = 1330,
  [SMALL_STATE(49)] = 1351,
  [SMALL_STATE(50)] = 1364,
  [SMALL_STATE(51)] = 1377,
  [SMALL_STATE(52)] = 1390,
  [SMALL_STATE(53)] = 1403,
  [SMALL_STATE(54)] = 1416,
  [SMALL_STATE(55)] = 1429,
  [SMALL_STATE(56)] = 1442,
  [SMALL_STATE(57)] = 1455,
  [SMALL_STATE(58)] = 1468,
  [SMALL_STATE(59)] = 1481,
  [SMALL_STATE(60)] = 1494,
  [SMALL_STATE(61)] = 1507,
  [SMALL_STATE(62)] = 1520,
  [SMALL_STATE(63)] = 1535,
  [SMALL_STATE(64)] = 1550,
  [SMALL_STATE(65)] = 1562,
  [SMALL_STATE(66)] = 1572,
  [SMALL_STATE(67)] = 1581,
  [SMALL_STATE(68)] = 1589,
  [SMALL_STATE(69)] = 1597,
  [SMALL_STATE(70)] = 1605,
  [SMALL_STATE(71)] = 1621,
  [SMALL_STATE(72)] = 1629,
  [SMALL_STATE(73)] = 1640,
  [SMALL_STATE(74)] = 1650,
  [SMALL_STATE(75)] = 1660,
  [SMALL_STATE(76)] = 1670,
  [SMALL_STATE(77)] = 1680,
  [SMALL_STATE(78)] = 1690,
  [SMALL_STATE(79)] = 1698,
  [SMALL_STATE(80)] = 1708,
  [SMALL_STATE(81)] = 1718,
  [SMALL_STATE(82)] = 1728,
  [SMALL_STATE(83)] = 1736,
  [SMALL_STATE(84)] = 1746,
  [SMALL_STATE(85)] = 1756,
  [SMALL_STATE(86)] = 1766,
  [SMALL_STATE(87)] = 1773,
  [SMALL_STATE(88)] = 1780,
  [SMALL_STATE(89)] = 1787,
  [SMALL_STATE(90)] = 1792,
  [SMALL_STATE(91)] = 1799,
  [SMALL_STATE(92)] = 1803,
  [SMALL_STATE(93)] = 1807,
  [SMALL_STATE(94)] = 1811,
  [SMALL_STATE(95)] = 1815,
  [SMALL_STATE(96)] = 1819,
  [SMALL_STATE(97)] = 1823,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, 0, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, 0, 1),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, 0, 1),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, 0, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, 0, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_assignment_statement, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_assignment_statement, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 4, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 4, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration_statement, 5, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration_statement, 5, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type_annotation_operator, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_annotation_operator, 1, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 6, 0, 1),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 6, 0, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 8, 0, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 8, 0, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 9, 0, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 9, 0, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 10, 0, 1),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 10, 0, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, 0, 0),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration_statement, 7, 0, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration_statement, 7, 0, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1, 0, 0),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 1, 0, 0),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 1, 0, 0),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2, 0, 0),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_operator, 1, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_assignment_operator, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(93),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 4, 0, 0),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [279] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
