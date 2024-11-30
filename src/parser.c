#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 10
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  sym_identifier = 2,
  sym_macro_identifier = 3,
  sym_number = 4,
  sym_string = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_EQ_EQ = 8,
  anon_sym_BANG_EQ = 9,
  anon_sym_LT = 10,
  anon_sym_GT = 11,
  anon_sym_LT_EQ = 12,
  anon_sym_GT_EQ = 13,
  anon_sym_i8 = 14,
  anon_sym_str = 15,
  anon_sym_LPAREN = 16,
  anon_sym_RPAREN = 17,
  anon_sym_DASH_GT = 18,
  anon_sym_COMMA = 19,
  anon_sym_LBRACE = 20,
  anon_sym_RBRACE = 21,
  anon_sym_if = 22,
  anon_sym_elif = 23,
  anon_sym_else = 24,
  sym_source_file = 25,
  sym__statement = 26,
  sym__expression_statement = 27,
  sym__declaration_statement = 28,
  sym_assignment_operator = 29,
  sym_comparison_operator = 30,
  sym_type = 31,
  sym_function_declaration = 32,
  sym_parameters = 33,
  sym_block = 34,
  sym_variable_declaration = 35,
  sym__expression = 36,
  sym_call_expression = 37,
  sym_macro_expression = 38,
  sym_arguments = 39,
  sym_comparison = 40,
  sym__condition = 41,
  sym_if_statement = 42,
  sym_else_if_statement = 43,
  sym_else_statement = 44,
  aux_sym_source_file_repeat1 = 45,
  aux_sym_parameters_repeat1 = 46,
  aux_sym_arguments_repeat1 = 47,
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
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_i8] = "i8",
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
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_assignment_operator] = "assignment_operator",
  [sym_comparison_operator] = "comparison_operator",
  [sym_type] = "type",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_variable_declaration] = "variable_declaration",
  [sym__expression] = "_expression",
  [sym_call_expression] = "call_expression",
  [sym_macro_expression] = "macro_expression",
  [sym_arguments] = "arguments",
  [sym_comparison] = "comparison",
  [sym__condition] = "_condition",
  [sym_if_statement] = "if_statement",
  [sym_else_if_statement] = "else_if_statement",
  [sym_else_statement] = "else_statement",
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
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_i8] = anon_sym_i8,
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
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_comparison_operator] = sym_comparison_operator,
  [sym_type] = sym_type,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_block] = sym_block,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__expression] = sym__expression,
  [sym_call_expression] = sym_call_expression,
  [sym_macro_expression] = sym_macro_expression,
  [sym_arguments] = sym_arguments,
  [sym_comparison] = sym_comparison,
  [sym__condition] = sym__condition,
  [sym_if_statement] = sym_if_statement,
  [sym_else_if_statement] = sym_else_if_statement,
  [sym_else_statement] = sym_else_statement,
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
  [anon_sym_i8] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration_statement] = {
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
  [6] = {.index = 10, .length = 3},
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
  [6] = 4,
  [7] = 5,
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 23,
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
  [41] = 24,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 40,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 5,
        '"', 2,
        '$', 10,
        '(', 40,
        ')', 41,
        ',', 43,
        '-', 7,
        ':', 28,
        ';', 15,
        '<', 32,
        '=', 29,
        '>', 33,
        'e', 21,
        'i', 16,
        's', 23,
        '{', 44,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '8') ADVANCE(36);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 's') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 10:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      ADVANCE_MAP(
        '!', 5,
        '$', 10,
        '(', 40,
        ')', 41,
        ',', 43,
        ';', 15,
        '<', 32,
        '=', 6,
        '>', 33,
        'i', 18,
        '{', 44,
        '}', 45,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '$') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == '}') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 's') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 12},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
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
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym__expression] = STATE(83),
    [sym_call_expression] = STATE(83),
    [sym_macro_expression] = STATE(83),
    [sym_if_statement] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_macro_identifier] = ACTIONS(7),
    [anon_sym_if] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(16), 1,
      sym_macro_identifier,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(2), 7,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      aux_sym_source_file_repeat1,
  [28] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    STATE(83), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(2), 7,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      aux_sym_source_file_repeat1,
  [55] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(24), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(5), 7,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      aux_sym_source_file_repeat1,
  [82] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(2), 7,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      aux_sym_source_file_repeat1,
  [109] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(7), 7,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      aux_sym_source_file_repeat1,
  [136] = 6,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(30), 1,
      anon_sym_RBRACE,
    STATE(83), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(2), 7,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      sym_if_statement,
      aux_sym_source_file_repeat1,
  [163] = 2,
    ACTIONS(34), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(32), 8,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [178] = 2,
    ACTIONS(38), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(36), 8,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [193] = 2,
    ACTIONS(42), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(40), 8,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [208] = 6,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_arguments,
    ACTIONS(46), 2,
      sym_number,
      sym_string,
    STATE(56), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [230] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 2,
      sym_number,
      sym_string,
    STATE(62), 2,
      sym_comparison,
      sym__condition,
    STATE(19), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [250] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(50), 1,
      sym_identifier,
    ACTIONS(52), 2,
      sym_number,
      sym_string,
    STATE(70), 2,
      sym_comparison,
      sym__condition,
    STATE(19), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [270] = 5,
    ACTIONS(58), 1,
      anon_sym_elif,
    ACTIONS(60), 1,
      anon_sym_else,
    ACTIONS(56), 2,
      sym_identifier,
      anon_sym_if,
    STATE(28), 2,
      sym_else_if_statement,
      sym_else_statement,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [290] = 5,
    ACTIONS(58), 1,
      anon_sym_elif,
    ACTIONS(60), 1,
      anon_sym_else,
    ACTIONS(64), 2,
      sym_identifier,
      anon_sym_if,
    STATE(31), 2,
      sym_else_if_statement,
      sym_else_statement,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [310] = 4,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [327] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(74), 1,
      sym_arguments,
    ACTIONS(46), 2,
      sym_number,
      sym_string,
    STATE(56), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [346] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(72), 1,
      sym_identifier,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    ACTIONS(74), 2,
      sym_number,
      sym_string,
    STATE(82), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [365] = 4,
    ACTIONS(78), 1,
      anon_sym_LBRACE,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [382] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(80), 1,
      sym_identifier,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 2,
      sym_number,
      sym_string,
    STATE(78), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [401] = 3,
    STATE(22), 1,
      sym_comparison_operator,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [415] = 4,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 2,
      sym_number,
      sym_string,
    STATE(79), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [431] = 2,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
    ACTIONS(92), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
  [443] = 2,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
    ACTIONS(96), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
  [455] = 4,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(98), 1,
      sym_identifier,
    ACTIONS(100), 2,
      sym_number,
      sym_string,
    STATE(65), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [471] = 4,
    STATE(18), 1,
      sym_assignment_operator,
    STATE(57), 1,
      sym_type,
    ACTIONS(102), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(104), 2,
      anon_sym_i8,
      anon_sym_str,
  [486] = 5,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    STATE(58), 1,
      aux_sym_parameters_repeat1,
    STATE(61), 1,
      sym_assignment_operator,
    ACTIONS(106), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [503] = 2,
    ACTIONS(114), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [513] = 2,
    ACTIONS(92), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [523] = 1,
    ACTIONS(116), 5,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_LBRACE,
  [531] = 2,
    ACTIONS(120), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [541] = 2,
    ACTIONS(124), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [551] = 2,
    ACTIONS(128), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [561] = 2,
    ACTIONS(132), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [571] = 3,
    STATE(53), 1,
      sym_assignment_operator,
    ACTIONS(106), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(134), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [583] = 2,
    ACTIONS(138), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [593] = 2,
    ACTIONS(142), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(140), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [603] = 2,
    ACTIONS(146), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(144), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [613] = 2,
    ACTIONS(150), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [623] = 1,
    ACTIONS(152), 5,
      sym_identifier,
      sym_macro_identifier,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
  [631] = 2,
    ACTIONS(96), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [641] = 2,
    ACTIONS(156), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [651] = 4,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_arguments_repeat1,
  [664] = 1,
    ACTIONS(162), 4,
      sym_identifier,
      sym_macro_identifier,
      sym_number,
      sym_string,
  [671] = 1,
    ACTIONS(152), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_i8,
      anon_sym_str,
  [678] = 3,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_assignment_operator,
    ACTIONS(106), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [689] = 3,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(164), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
  [699] = 3,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    ACTIONS(166), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [709] = 2,
    STATE(68), 1,
      sym_type,
    ACTIONS(104), 2,
      anon_sym_i8,
      anon_sym_str,
  [717] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(169), 1,
      anon_sym_RPAREN,
    STATE(55), 1,
      aux_sym_parameters_repeat1,
  [727] = 3,
    ACTIONS(171), 1,
      anon_sym_DASH_GT,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(37), 1,
      sym_block,
  [737] = 3,
    ACTIONS(175), 1,
      anon_sym_RPAREN,
    ACTIONS(177), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
  [747] = 2,
    STATE(69), 1,
      sym_type,
    ACTIONS(104), 2,
      anon_sym_i8,
      anon_sym_str,
  [755] = 2,
    STATE(71), 1,
      sym_type,
    ACTIONS(104), 2,
      anon_sym_i8,
      anon_sym_str,
  [763] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(180), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [773] = 3,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(47), 1,
      aux_sym_arguments_repeat1,
  [783] = 2,
    STATE(20), 1,
      sym_assignment_operator,
    ACTIONS(102), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [791] = 3,
    ACTIONS(110), 1,
      anon_sym_COMMA,
    ACTIONS(182), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [801] = 3,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    ACTIONS(184), 1,
      anon_sym_DASH_GT,
    STATE(36), 1,
      sym_block,
  [811] = 2,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(175), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [819] = 2,
    STATE(50), 1,
      sym_type,
    ACTIONS(104), 2,
      anon_sym_i8,
      anon_sym_str,
  [827] = 2,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(15), 1,
      sym_block,
  [834] = 2,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [841] = 2,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [848] = 1,
    ACTIONS(175), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [853] = 2,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
  [860] = 2,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(84), 1,
      sym_parameters,
  [867] = 2,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
  [874] = 1,
    ACTIONS(196), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [879] = 2,
    ACTIONS(186), 1,
      anon_sym_LBRACE,
    STATE(14), 1,
      sym_block,
  [886] = 2,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(39), 1,
      sym_block,
  [893] = 2,
    ACTIONS(173), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_block,
  [900] = 2,
    ACTIONS(194), 1,
      sym_identifier,
    STATE(76), 1,
      sym_parameters,
  [907] = 1,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
  [911] = 1,
    ACTIONS(200), 1,
      anon_sym_LPAREN,
  [915] = 1,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [919] = 1,
    ACTIONS(204), 1,
      ts_builtin_sym_end,
  [923] = 1,
    ACTIONS(190), 1,
      anon_sym_SEMI,
  [927] = 1,
    ACTIONS(192), 1,
      anon_sym_LBRACE,
  [931] = 1,
    ACTIONS(206), 1,
      sym_identifier,
  [935] = 1,
    ACTIONS(208), 1,
      anon_sym_RPAREN,
  [939] = 1,
    ACTIONS(188), 1,
      anon_sym_SEMI,
  [943] = 1,
    ACTIONS(210), 1,
      anon_sym_SEMI,
  [947] = 1,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 270,
  [SMALL_STATE(15)] = 290,
  [SMALL_STATE(16)] = 310,
  [SMALL_STATE(17)] = 327,
  [SMALL_STATE(18)] = 346,
  [SMALL_STATE(19)] = 365,
  [SMALL_STATE(20)] = 382,
  [SMALL_STATE(21)] = 401,
  [SMALL_STATE(22)] = 415,
  [SMALL_STATE(23)] = 431,
  [SMALL_STATE(24)] = 443,
  [SMALL_STATE(25)] = 455,
  [SMALL_STATE(26)] = 471,
  [SMALL_STATE(27)] = 486,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 513,
  [SMALL_STATE(30)] = 523,
  [SMALL_STATE(31)] = 531,
  [SMALL_STATE(32)] = 541,
  [SMALL_STATE(33)] = 551,
  [SMALL_STATE(34)] = 561,
  [SMALL_STATE(35)] = 571,
  [SMALL_STATE(36)] = 583,
  [SMALL_STATE(37)] = 593,
  [SMALL_STATE(38)] = 603,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 623,
  [SMALL_STATE(41)] = 631,
  [SMALL_STATE(42)] = 641,
  [SMALL_STATE(43)] = 651,
  [SMALL_STATE(44)] = 664,
  [SMALL_STATE(45)] = 671,
  [SMALL_STATE(46)] = 678,
  [SMALL_STATE(47)] = 689,
  [SMALL_STATE(48)] = 699,
  [SMALL_STATE(49)] = 709,
  [SMALL_STATE(50)] = 717,
  [SMALL_STATE(51)] = 727,
  [SMALL_STATE(52)] = 737,
  [SMALL_STATE(53)] = 747,
  [SMALL_STATE(54)] = 755,
  [SMALL_STATE(55)] = 763,
  [SMALL_STATE(56)] = 773,
  [SMALL_STATE(57)] = 783,
  [SMALL_STATE(58)] = 791,
  [SMALL_STATE(59)] = 801,
  [SMALL_STATE(60)] = 811,
  [SMALL_STATE(61)] = 819,
  [SMALL_STATE(62)] = 827,
  [SMALL_STATE(63)] = 834,
  [SMALL_STATE(64)] = 841,
  [SMALL_STATE(65)] = 848,
  [SMALL_STATE(66)] = 853,
  [SMALL_STATE(67)] = 860,
  [SMALL_STATE(68)] = 867,
  [SMALL_STATE(69)] = 874,
  [SMALL_STATE(70)] = 879,
  [SMALL_STATE(71)] = 886,
  [SMALL_STATE(72)] = 893,
  [SMALL_STATE(73)] = 900,
  [SMALL_STATE(74)] = 907,
  [SMALL_STATE(75)] = 911,
  [SMALL_STATE(76)] = 915,
  [SMALL_STATE(77)] = 919,
  [SMALL_STATE(78)] = 923,
  [SMALL_STATE(79)] = 927,
  [SMALL_STATE(80)] = 931,
  [SMALL_STATE(81)] = 935,
  [SMALL_STATE(82)] = 939,
  [SMALL_STATE(83)] = 943,
  [SMALL_STATE(84)] = 947,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, 0, 1),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, 0, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, 0, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, 0, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 3),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 3),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 4),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, 0, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 6),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 8, 0, 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 9, 0, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 9, 0, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 10, 0, 6),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 10, 0, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [204] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
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
