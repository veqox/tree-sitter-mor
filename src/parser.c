#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 8

enum ts_symbol_identifiers {
  anon_sym_SEMI = 1,
  sym_identifier = 2,
  sym_macro_identifier = 3,
  sym_number = 4,
  sym_string = 5,
  anon_sym_COLON = 6,
  anon_sym_EQ = 7,
  anon_sym_i8 = 8,
  anon_sym_str = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_LBRACE = 13,
  anon_sym_RBRACE = 14,
  sym_source_file = 15,
  sym__statement = 16,
  sym__expression_statement = 17,
  sym__declaration_statement = 18,
  sym_assignment_operator = 19,
  sym__type = 20,
  sym_function_declaration = 21,
  sym_parameters = 22,
  sym_block = 23,
  sym_variable_declaration = 24,
  sym__expression = 25,
  sym_call_expression = 26,
  sym_macro_expression = 27,
  sym_arguments = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_parameters_repeat1 = 30,
  aux_sym_arguments_repeat1 = 31,
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
  [anon_sym_i8] = "i8",
  [anon_sym_str] = "str",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression_statement] = "_expression_statement",
  [sym__declaration_statement] = "_declaration_statement",
  [sym_assignment_operator] = "assignment_operator",
  [sym__type] = "_type",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_variable_declaration] = "variable_declaration",
  [sym__expression] = "_expression",
  [sym_call_expression] = "call_expression",
  [sym_macro_expression] = "macro_expression",
  [sym_arguments] = "arguments",
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
  [anon_sym_i8] = anon_sym_i8,
  [anon_sym_str] = anon_sym_str,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression_statement] = sym__expression_statement,
  [sym__declaration_statement] = sym__declaration_statement,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym__type] = sym__type,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_block] = sym_block,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__expression] = sym__expression,
  [sym_call_expression] = sym_call_expression,
  [sym_macro_expression] = sym_macro_expression,
  [sym_arguments] = sym_arguments,
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 12,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      ADVANCE_MAP(
        '"', 1,
        '$', 6,
        '(', 24,
        ')', 25,
        ',', 26,
        ':', 18,
        ';', 10,
        '=', 19,
        'i', 11,
        's', 13,
        '{', 27,
        '}', 28,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '8') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 's') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(4);
      END_STATE();
    case 6:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 7:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '$') ADVANCE(6);
      if (lookahead == '(') ADVANCE(24);
      if (lookahead == ')') ADVANCE(25);
      if (lookahead == '}') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '8') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_macro_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_i8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_str);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_str);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
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
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_str] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(59),
    [sym__statement] = STATE(3),
    [sym__expression_statement] = STATE(3),
    [sym__declaration_statement] = STATE(3),
    [sym_function_declaration] = STATE(3),
    [sym_variable_declaration] = STATE(3),
    [sym__expression] = STATE(56),
    [sym_call_expression] = STATE(56),
    [sym_macro_expression] = STATE(56),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [sym_macro_identifier] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(14), 1,
      sym_macro_identifier,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(2), 6,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [24] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(56), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(2), 6,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [47] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(5), 6,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [70] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    STATE(56), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
    STATE(2), 6,
      sym__statement,
      sym__expression_statement,
      sym__declaration_statement,
      sym_function_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [93] = 6,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_RPAREN,
    STATE(58), 1,
      sym_arguments,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    STATE(25), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [115] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(53), 1,
      sym_arguments,
    ACTIONS(25), 2,
      sym_number,
      sym_string,
    STATE(25), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [134] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 2,
      sym_number,
      sym_string,
    STATE(57), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [153] = 5,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    ACTIONS(37), 2,
      sym_number,
      sym_string,
    STATE(52), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [172] = 4,
    ACTIONS(7), 1,
      sym_macro_identifier,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(43), 2,
      sym_number,
      sym_string,
    STATE(46), 3,
      sym__expression,
      sym_call_expression,
      sym_macro_expression,
  [188] = 4,
    STATE(8), 1,
      sym_assignment_operator,
    STATE(32), 1,
      sym__type,
    ACTIONS(45), 2,
      anon_sym_COLON,
      anon_sym_EQ,
    ACTIONS(47), 2,
      anon_sym_i8,
      anon_sym_str,
  [203] = 1,
    ACTIONS(49), 5,
      sym_identifier,
      sym_macro_identifier,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
  [211] = 1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [218] = 4,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_arguments_repeat1,
  [231] = 1,
    ACTIONS(49), 4,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_i8,
      anon_sym_str,
  [238] = 1,
    ACTIONS(59), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [245] = 1,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [252] = 1,
    ACTIONS(63), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [259] = 1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [266] = 1,
    ACTIONS(67), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [273] = 1,
    ACTIONS(69), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [280] = 3,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    STATE(11), 1,
      sym_assignment_operator,
    ACTIONS(71), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [291] = 1,
    ACTIONS(73), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [298] = 1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      sym_identifier,
      sym_macro_identifier,
      anon_sym_RBRACE,
  [305] = 3,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_arguments_repeat1,
  [315] = 1,
    ACTIONS(77), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [321] = 2,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [329] = 3,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(81), 1,
      anon_sym_COMMA,
    STATE(28), 1,
      aux_sym_arguments_repeat1,
  [339] = 2,
    STATE(31), 1,
      sym_assignment_operator,
    ACTIONS(71), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [347] = 3,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_parameters,
  [357] = 2,
    STATE(33), 1,
      sym__type,
    ACTIONS(88), 2,
      anon_sym_i8,
      anon_sym_str,
  [365] = 2,
    STATE(9), 1,
      sym_assignment_operator,
    ACTIONS(45), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [373] = 3,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_parameters_repeat1,
  [383] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_arguments_repeat1,
  [393] = 1,
    ACTIONS(96), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [399] = 3,
    ACTIONS(92), 1,
      anon_sym_COMMA,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_parameters_repeat1,
  [409] = 3,
    ACTIONS(84), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_RPAREN,
    STATE(50), 1,
      sym_parameters,
  [419] = 2,
    STATE(40), 1,
      sym_assignment_operator,
    ACTIONS(71), 2,
      anon_sym_COLON,
      anon_sym_EQ,
  [427] = 3,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    ACTIONS(104), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_parameters_repeat1,
  [437] = 2,
    STATE(47), 1,
      sym__type,
    ACTIONS(107), 2,
      anon_sym_i8,
      anon_sym_str,
  [445] = 1,
    ACTIONS(109), 3,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [451] = 2,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(111), 1,
      anon_sym_SEMI,
  [458] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(13), 1,
      sym_block,
  [465] = 2,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(115), 1,
      anon_sym_SEMI,
  [472] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
  [479] = 1,
    ACTIONS(79), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [484] = 1,
    ACTIONS(117), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [489] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block,
  [496] = 2,
    ACTIONS(113), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [503] = 1,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [507] = 1,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [511] = 1,
    ACTIONS(115), 1,
      anon_sym_SEMI,
  [515] = 1,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
  [519] = 1,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
  [523] = 1,
    ACTIONS(127), 1,
      sym_identifier,
  [527] = 1,
    ACTIONS(129), 1,
      anon_sym_SEMI,
  [531] = 1,
    ACTIONS(111), 1,
      anon_sym_SEMI,
  [535] = 1,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
  [539] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 47,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 93,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 134,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 203,
  [SMALL_STATE(13)] = 211,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 238,
  [SMALL_STATE(17)] = 245,
  [SMALL_STATE(18)] = 252,
  [SMALL_STATE(19)] = 259,
  [SMALL_STATE(20)] = 266,
  [SMALL_STATE(21)] = 273,
  [SMALL_STATE(22)] = 280,
  [SMALL_STATE(23)] = 291,
  [SMALL_STATE(24)] = 298,
  [SMALL_STATE(25)] = 305,
  [SMALL_STATE(26)] = 315,
  [SMALL_STATE(27)] = 321,
  [SMALL_STATE(28)] = 329,
  [SMALL_STATE(29)] = 339,
  [SMALL_STATE(30)] = 347,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 365,
  [SMALL_STATE(33)] = 373,
  [SMALL_STATE(34)] = 383,
  [SMALL_STATE(35)] = 393,
  [SMALL_STATE(36)] = 399,
  [SMALL_STATE(37)] = 409,
  [SMALL_STATE(38)] = 419,
  [SMALL_STATE(39)] = 427,
  [SMALL_STATE(40)] = 437,
  [SMALL_STATE(41)] = 445,
  [SMALL_STATE(42)] = 451,
  [SMALL_STATE(43)] = 458,
  [SMALL_STATE(44)] = 465,
  [SMALL_STATE(45)] = 472,
  [SMALL_STATE(46)] = 479,
  [SMALL_STATE(47)] = 484,
  [SMALL_STATE(48)] = 489,
  [SMALL_STATE(49)] = 496,
  [SMALL_STATE(50)] = 503,
  [SMALL_STATE(51)] = 507,
  [SMALL_STATE(52)] = 511,
  [SMALL_STATE(53)] = 515,
  [SMALL_STATE(54)] = 519,
  [SMALL_STATE(55)] = 523,
  [SMALL_STATE(56)] = 527,
  [SMALL_STATE(57)] = 531,
  [SMALL_STATE(58)] = 535,
  [SMALL_STATE(59)] = 539,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 6),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, 0, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 6, 0, 4),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression_statement, 2, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 7, 0, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 8, 0, 7),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_expression, 4, 0, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, 0, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, 0, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 4, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
