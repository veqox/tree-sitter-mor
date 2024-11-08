#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 25
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_COLON_COLON = 1,
  anon_sym_COLON_EQ = 2,
  sym_identifier = 3,
  sym_number = 4,
  sym_string = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  sym_source_file = 11,
  sym__statement = 12,
  sym_assignment_operator = 13,
  sym_function_declaration = 14,
  sym_function_expression = 15,
  sym_parameters = 16,
  sym_block = 17,
  sym_variable_declaration = 18,
  sym_expression = 19,
  sym_function_call = 20,
  sym_arguments = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_parameters_repeat1 = 23,
  aux_sym_arguments_repeat1 = 24,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_COLON_EQ] = ":=",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_assignment_operator] = "assignment_operator",
  [sym_function_declaration] = "function_declaration",
  [sym_function_expression] = "function_expression",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_variable_declaration] = "variable_declaration",
  [sym_expression] = "expression",
  [sym_function_call] = "function_call",
  [sym_arguments] = "arguments",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_function_declaration] = sym_function_declaration,
  [sym_function_expression] = sym_function_expression,
  [sym_parameters] = sym_parameters,
  [sym_block] = sym_block,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_expression] = sym_expression,
  [sym_function_call] = sym_function_call,
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
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_expression] = {
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
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
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
  field_identifier = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_identifier] = "identifier",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_identifier, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      if (lookahead == ',') ADVANCE(12);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '{') ADVANCE(13);
      if (lookahead == '}') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(3);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(35),
    [sym__statement] = STATE(6),
    [sym_function_declaration] = STATE(6),
    [sym_variable_declaration] = STATE(6),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    STATE(9), 1,
      sym_function_call,
    STATE(20), 1,
      sym_expression,
    STATE(32), 1,
      sym_arguments,
    ACTIONS(9), 2,
      sym_number,
      sym_string,
  [20] = 3,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(3), 4,
      sym__statement,
      sym_function_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [34] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(18), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_function_call,
    STATE(15), 1,
      sym_function_expression,
    STATE(16), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_number,
      sym_string,
  [54] = 2,
    ACTIONS(22), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [65] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
    STATE(3), 4,
      sym__statement,
      sym_function_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [78] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(8), 4,
      sym__statement,
      sym_function_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [91] = 3,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(28), 1,
      anon_sym_RBRACE,
    STATE(3), 4,
      sym__statement,
      sym_function_declaration,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [104] = 1,
    ACTIONS(20), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [112] = 1,
    ACTIONS(30), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [120] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    STATE(9), 1,
      sym_function_call,
    STATE(31), 1,
      sym_expression,
    ACTIONS(9), 2,
      sym_number,
      sym_string,
  [134] = 1,
    ACTIONS(32), 5,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [142] = 1,
    ACTIONS(34), 4,
      sym_identifier,
      sym_number,
      sym_string,
      anon_sym_LPAREN,
  [149] = 2,
    STATE(4), 1,
      sym_assignment_operator,
    ACTIONS(36), 2,
      anon_sym_COLON_COLON,
      anon_sym_COLON_EQ,
  [157] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
  [163] = 1,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
  [169] = 3,
    ACTIONS(42), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_parameters,
  [179] = 3,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_parameters_repeat1,
  [189] = 3,
    ACTIONS(50), 1,
      anon_sym_RPAREN,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_arguments_repeat1,
  [199] = 3,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(19), 1,
      aux_sym_arguments_repeat1,
  [209] = 1,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
  [215] = 3,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(22), 1,
      aux_sym_parameters_repeat1,
  [225] = 1,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
  [231] = 3,
    ACTIONS(48), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      aux_sym_parameters_repeat1,
  [241] = 1,
    ACTIONS(67), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
  [247] = 3,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    ACTIONS(71), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_arguments_repeat1,
  [257] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      sym_identifier,
      anon_sym_RBRACE,
  [263] = 1,
    ACTIONS(58), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [268] = 2,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block,
  [275] = 2,
    ACTIONS(76), 1,
      anon_sym_LBRACE,
    STATE(25), 1,
      sym_block,
  [282] = 1,
    ACTIONS(69), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [287] = 1,
    ACTIONS(78), 1,
      anon_sym_RPAREN,
  [291] = 1,
    ACTIONS(80), 1,
      sym_identifier,
  [295] = 1,
    ACTIONS(82), 1,
      anon_sym_RPAREN,
  [299] = 1,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 54,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 78,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 104,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 134,
  [SMALL_STATE(13)] = 142,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 157,
  [SMALL_STATE(16)] = 163,
  [SMALL_STATE(17)] = 169,
  [SMALL_STATE(18)] = 179,
  [SMALL_STATE(19)] = 189,
  [SMALL_STATE(20)] = 199,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 215,
  [SMALL_STATE(23)] = 225,
  [SMALL_STATE(24)] = 231,
  [SMALL_STATE(25)] = 241,
  [SMALL_STATE(26)] = 247,
  [SMALL_STATE(27)] = 257,
  [SMALL_STATE(28)] = 263,
  [SMALL_STATE(29)] = 268,
  [SMALL_STATE(30)] = 275,
  [SMALL_STATE(31)] = 282,
  [SMALL_STATE(32)] = 287,
  [SMALL_STATE(33)] = 291,
  [SMALL_STATE(34)] = 295,
  [SMALL_STATE(35)] = 299,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3, 0, 1),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4, 0, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 3, 0, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 3, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_expression, 4, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [84] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
