#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 78
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
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
  anon_sym_COMMA = 18,
  anon_sym_LBRACE = 19,
  anon_sym_RBRACE = 20,
  anon_sym_if = 21,
  anon_sym_elif = 22,
  anon_sym_else = 23,
  sym_source_file = 24,
  sym__statement = 25,
  sym__expression_statement = 26,
  sym__declaration_statement = 27,
  sym_assignment_operator = 28,
  sym_comparison_operator = 29,
  sym__type = 30,
  sym_function_declaration = 31,
  sym_parameters = 32,
  sym_block = 33,
  sym_variable_declaration = 34,
  sym__expression = 35,
  sym_call_expression = 36,
  sym_macro_expression = 37,
  sym_arguments = 38,
  sym_comparison = 39,
  sym__condition = 40,
  sym_if_statement = 41,
  sym_else_if_statement = 42,
  sym_else_statement = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_parameters_repeat1 = 45,
  aux_sym_arguments_repeat1 = 46,
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
  [sym__type] = "_type",
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
  [sym__type] = sym__type,
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
  [sym__type] = {
    .visible = false,
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
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 24,
  [39] = 25,
  [40] = 40,
  [41] = 41,
  [42] = 37,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 5,
        '"', 2,
        '$', 9,
        '(', 39,
        ')', 40,
        ',', 41,
        ':', 27,
        ';', 14,
        '<', 31,
        '=', 28,
        '>', 32,
        'e', 20,
        'i', 15,
        's', 22,
        '{', 42,
        '}', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(40);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(10);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '8') ADVANCE(35);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(27);
      if (lookahead == '=') ADVANCE(28);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 's') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 8:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 9:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 10:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 11:
      if (eof) ADVANCE(13);
      ADVANCE_MAP(
        '!', 5,
        '$', 9,
        '(', 39,
        ')', 40,
        ',', 41,
        ';', 14,
        '<', 31,
        '=', 6,
        '>', 32,
        'i', 17,
        '{', 42,
        '}', 43,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 12:
      if (eof) ADVANCE(13);
      if (lookahead == '$') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == '}') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'f') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 's') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_elif);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_else);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
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
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
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
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym__expression] = STATE(71),
    [sym_call_expression] = STATE(71),
    [sym_macro_expression] = STATE(71),
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
    STATE(71), 3,
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
    STATE(71), 3,
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
    STATE(71), 3,
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
    STATE(71), 3,
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
    STATE(71), 3,
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
    STATE(71), 3,
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
  [208] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(46), 2,
      sym_number,
      sym_string,
    STATE(61), 2,
      sym_comparison,
      sym__condition,
    STATE(17), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [228] = 5,
    ACTIONS(52), 1,
      anon_sym_elif,
    ACTIONS(54), 1,
      anon_sym_else,
    ACTIONS(50), 2,
      sym_identifier,
      anon_sym_if,
    STATE(36), 2,
      sym_else_if_statement,
      sym_else_statement,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [248] = 5,
    ACTIONS(52), 1,
      anon_sym_elif,
    ACTIONS(54), 1,
      anon_sym_else,
    ACTIONS(58), 2,
      sym_identifier,
      anon_sym_if,
    STATE(29), 2,
      sym_else_if_statement,
      sym_else_statement,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [268] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(44), 1,
      sym_identifier,
    ACTIONS(46), 2,
      sym_number,
      sym_string,
    STATE(57), 2,
      sym_comparison,
      sym__condition,
    STATE(17), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [288] = 6,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(60), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_arguments,
    ACTIONS(62), 2,
      sym_number,
      sym_string,
    STATE(53), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [310] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(60), 1,
      sym_identifier,
    STATE(67), 1,
      sym_arguments,
    ACTIONS(62), 2,
      sym_number,
      sym_string,
    STATE(53), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [329] = 4,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_comparison_operator,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [346] = 4,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym_comparison_operator,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [363] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(74), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 2,
      sym_number,
      sym_string,
    STATE(72), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
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
    STATE(75), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [401] = 4,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(86), 1,
      sym_identifier,
    ACTIONS(88), 2,
      sym_number,
      sym_string,
    STATE(68), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [417] = 3,
    STATE(21), 1,
      sym_comparison_operator,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [431] = 4,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(90), 1,
      sym_identifier,
    ACTIONS(92), 2,
      sym_number,
      sym_string,
    STATE(66), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [447] = 2,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
    ACTIONS(96), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
  [459] = 2,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
    ACTIONS(100), 4,
      sym_identifier,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
  [471] = 5,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_parameters_repeat1,
    STATE(47), 1,
      sym_assignment_operator,
    ACTIONS(102), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [488] = 4,
    STATE(19), 1,
      sym_assignment_operator,
    STATE(50), 1,
      sym__type,
    ACTIONS(108), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(110), 2,
      anon_sym_i8,
      anon_sym_str,
  [503] = 2,
    ACTIONS(114), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [513] = 2,
    ACTIONS(118), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [523] = 2,
    ACTIONS(122), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(120), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [533] = 2,
    ACTIONS(126), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [543] = 2,
    ACTIONS(130), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [553] = 2,
    ACTIONS(134), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [563] = 2,
    ACTIONS(138), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [573] = 3,
    STATE(44), 1,
      sym_assignment_operator,
    ACTIONS(102), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(140), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [585] = 2,
    ACTIONS(144), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [595] = 1,
    ACTIONS(146), 5,
      sym_identifier,
      sym_macro_identifier,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
  [603] = 2,
    ACTIONS(96), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [613] = 2,
    ACTIONS(100), 2,
      sym_identifier,
      anon_sym_if,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [623] = 4,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
  [636] = 1,
    ACTIONS(152), 4,
      sym_identifier,
      sym_macro_identifier,
      sym_number,
      sym_string,
  [643] = 1,
    ACTIONS(146), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_i8,
      anon_sym_str,
  [650] = 3,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_assignment_operator,
    ACTIONS(102), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [661] = 2,
    STATE(63), 1,
      sym__type,
    ACTIONS(154), 2,
      anon_sym_i8,
      anon_sym_str,
  [669] = 3,
    ACTIONS(156), 1,
      anon_sym_RPAREN,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_arguments_repeat1,
  [679] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_parameters_repeat1,
  [689] = 2,
    STATE(48), 1,
      sym__type,
    ACTIONS(163), 2,
      anon_sym_i8,
      anon_sym_str,
  [697] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      aux_sym_parameters_repeat1,
  [707] = 3,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
    ACTIONS(167), 1,
      anon_sym_COMMA,
    STATE(49), 1,
      aux_sym_parameters_repeat1,
  [717] = 2,
    STATE(20), 1,
      sym_assignment_operator,
    ACTIONS(108), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [725] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(170), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_parameters_repeat1,
  [735] = 3,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    ACTIONS(172), 1,
      anon_sym_RPAREN,
    STATE(45), 1,
      aux_sym_arguments_repeat1,
  [745] = 3,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
    ACTIONS(150), 1,
      anon_sym_COMMA,
    STATE(52), 1,
      aux_sym_arguments_repeat1,
  [755] = 2,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(156), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [763] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(70), 1,
      sym_parameters,
  [770] = 2,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [777] = 2,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_block,
  [784] = 2,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(180), 1,
      anon_sym_SEMI,
  [791] = 2,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    STATE(34), 1,
      sym_block,
  [798] = 2,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(76), 1,
      sym_parameters,
  [805] = 2,
    ACTIONS(178), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
  [812] = 2,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
  [819] = 1,
    ACTIONS(186), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [824] = 2,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    STATE(32), 1,
      sym_block,
  [831] = 2,
    ACTIONS(182), 1,
      anon_sym_LBRACE,
    STATE(31), 1,
      sym_block,
  [838] = 1,
    ACTIONS(156), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [843] = 1,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
  [847] = 1,
    ACTIONS(184), 1,
      anon_sym_LBRACE,
  [851] = 1,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [855] = 1,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [859] = 1,
    ACTIONS(194), 1,
      anon_sym_SEMI,
  [863] = 1,
    ACTIONS(176), 1,
      anon_sym_SEMI,
  [867] = 1,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
  [871] = 1,
    ACTIONS(198), 1,
      sym_identifier,
  [875] = 1,
    ACTIONS(180), 1,
      anon_sym_SEMI,
  [879] = 1,
    ACTIONS(200), 1,
      anon_sym_RPAREN,
  [883] = 1,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
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
  [SMALL_STATE(12)] = 228,
  [SMALL_STATE(13)] = 248,
  [SMALL_STATE(14)] = 268,
  [SMALL_STATE(15)] = 288,
  [SMALL_STATE(16)] = 310,
  [SMALL_STATE(17)] = 329,
  [SMALL_STATE(18)] = 346,
  [SMALL_STATE(19)] = 363,
  [SMALL_STATE(20)] = 382,
  [SMALL_STATE(21)] = 401,
  [SMALL_STATE(22)] = 417,
  [SMALL_STATE(23)] = 431,
  [SMALL_STATE(24)] = 447,
  [SMALL_STATE(25)] = 459,
  [SMALL_STATE(26)] = 471,
  [SMALL_STATE(27)] = 488,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 513,
  [SMALL_STATE(30)] = 523,
  [SMALL_STATE(31)] = 533,
  [SMALL_STATE(32)] = 543,
  [SMALL_STATE(33)] = 553,
  [SMALL_STATE(34)] = 563,
  [SMALL_STATE(35)] = 573,
  [SMALL_STATE(36)] = 585,
  [SMALL_STATE(37)] = 595,
  [SMALL_STATE(38)] = 603,
  [SMALL_STATE(39)] = 613,
  [SMALL_STATE(40)] = 623,
  [SMALL_STATE(41)] = 636,
  [SMALL_STATE(42)] = 643,
  [SMALL_STATE(43)] = 650,
  [SMALL_STATE(44)] = 661,
  [SMALL_STATE(45)] = 669,
  [SMALL_STATE(46)] = 679,
  [SMALL_STATE(47)] = 689,
  [SMALL_STATE(48)] = 697,
  [SMALL_STATE(49)] = 707,
  [SMALL_STATE(50)] = 717,
  [SMALL_STATE(51)] = 725,
  [SMALL_STATE(52)] = 735,
  [SMALL_STATE(53)] = 745,
  [SMALL_STATE(54)] = 755,
  [SMALL_STATE(55)] = 763,
  [SMALL_STATE(56)] = 770,
  [SMALL_STATE(57)] = 777,
  [SMALL_STATE(58)] = 784,
  [SMALL_STATE(59)] = 791,
  [SMALL_STATE(60)] = 798,
  [SMALL_STATE(61)] = 805,
  [SMALL_STATE(62)] = 812,
  [SMALL_STATE(63)] = 819,
  [SMALL_STATE(64)] = 824,
  [SMALL_STATE(65)] = 831,
  [SMALL_STATE(66)] = 838,
  [SMALL_STATE(67)] = 843,
  [SMALL_STATE(68)] = 847,
  [SMALL_STATE(69)] = 851,
  [SMALL_STATE(70)] = 855,
  [SMALL_STATE(71)] = 859,
  [SMALL_STATE(72)] = 863,
  [SMALL_STATE(73)] = 867,
  [SMALL_STATE(74)] = 871,
  [SMALL_STATE(75)] = 875,
  [SMALL_STATE(76)] = 879,
  [SMALL_STATE(77)] = 883,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, 0, 2),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, 0, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, 0, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, 0, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 3),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 5, 0, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 6),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 8, 0, 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 6, 0, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 7, 0, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_if_statement, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_if_statement, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison_operator, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [196] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
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
