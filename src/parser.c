#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 23
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  anon_sym_LF = 2,
  anon_sym_EQ_EQ = 3,
  anon_sym_EQ_EQ_EQ = 4,
  anon_sym_EQ_EQ_EQ_EQ = 5,
  anon_sym_EQ_EQ_EQ_EQ_EQ = 6,
  anon_sym_EQ_EQ_EQ_EQ_EQ_EQ = 7,
  sym_word = 8,
  sym_source_file = 9,
  sym__heading = 10,
  sym_heading_l1 = 11,
  sym_heading_l2 = 12,
  sym_heading_l3 = 13,
  sym_heading_l4 = 14,
  sym_heading_l5 = 15,
  sym_heading_l6 = 16,
  aux_sym_source_file_repeat1 = 17,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "= ",
  [anon_sym_LF] = "\n",
  [anon_sym_EQ_EQ] = "== ",
  [anon_sym_EQ_EQ_EQ] = "=== ",
  [anon_sym_EQ_EQ_EQ_EQ] = "==== ",
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = "===== ",
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = "====== ",
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym__heading] = "_heading",
  [sym_heading_l1] = "heading_l1",
  [sym_heading_l2] = "heading_l2",
  [sym_heading_l3] = "heading_l3",
  [sym_heading_l4] = "heading_l4",
  [sym_heading_l5] = "heading_l5",
  [sym_heading_l6] = "heading_l6",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ_EQ,
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym__heading] = sym__heading,
  [sym_heading_l1] = sym_heading_l1,
  [sym_heading_l2] = sym_heading_l2,
  [sym_heading_l3] = sym_heading_l3,
  [sym_heading_l4] = sym_heading_l4,
  [sym_heading_l5] = sym_heading_l5,
  [sym_heading_l6] = sym_heading_l6,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__heading] = {
    .visible = false,
    .named = true,
  },
  [sym_heading_l1] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_l2] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_l3] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_l4] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_l5] = {
    .visible = true,
    .named = true,
  },
  [sym_heading_l6] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '=') ADVANCE(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == '=') ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '=') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '=') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ_EQ);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
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
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__heading] = STATE(3),
    [sym_heading_l1] = STATE(3),
    [sym_heading_l2] = STATE(3),
    [sym_heading_l3] = STATE(3),
    [sym_heading_l4] = STATE(3),
    [sym_heading_l5] = STATE(3),
    [sym_heading_l6] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(15),
  },
  [2] = {
    [sym__heading] = STATE(2),
    [sym_heading_l1] = STATE(2),
    [sym_heading_l2] = STATE(2),
    [sym_heading_l3] = STATE(2),
    [sym_heading_l4] = STATE(2),
    [sym_heading_l5] = STATE(2),
    [sym_heading_l6] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(19),
    [anon_sym_EQ_EQ] = ACTIONS(22),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(25),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(28),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(31),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(34),
  },
  [3] = {
    [sym__heading] = STATE(2),
    [sym_heading_l1] = STATE(2),
    [sym_heading_l2] = STATE(2),
    [sym_heading_l3] = STATE(2),
    [sym_heading_l4] = STATE(2),
    [sym_heading_l5] = STATE(2),
    [sym_heading_l6] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_EQ_EQ] = ACTIONS(7),
    [anon_sym_EQ_EQ_EQ] = ACTIONS(9),
    [anon_sym_EQ_EQ_EQ_EQ] = ACTIONS(11),
    [anon_sym_EQ_EQ_EQ_EQ_EQ] = ACTIONS(13),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [10] = 1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [20] = 1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [30] = 1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [40] = 1,
    ACTIONS(47), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [50] = 1,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_EQ_EQ,
      anon_sym_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [60] = 1,
    ACTIONS(51), 1,
      anon_sym_LF,
  [64] = 1,
    ACTIONS(53), 1,
      anon_sym_LF,
  [68] = 1,
    ACTIONS(55), 1,
      anon_sym_LF,
  [72] = 1,
    ACTIONS(57), 1,
      anon_sym_LF,
  [76] = 1,
    ACTIONS(59), 1,
      anon_sym_LF,
  [80] = 1,
    ACTIONS(61), 1,
      anon_sym_LF,
  [84] = 1,
    ACTIONS(63), 1,
      sym_word,
  [88] = 1,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
  [92] = 1,
    ACTIONS(67), 1,
      sym_word,
  [96] = 1,
    ACTIONS(69), 1,
      sym_word,
  [100] = 1,
    ACTIONS(71), 1,
      sym_word,
  [104] = 1,
    ACTIONS(73), 1,
      sym_word,
  [108] = 1,
    ACTIONS(75), 1,
      sym_word,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 10,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 50,
  [SMALL_STATE(10)] = 60,
  [SMALL_STATE(11)] = 64,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 72,
  [SMALL_STATE(14)] = 76,
  [SMALL_STATE(15)] = 80,
  [SMALL_STATE(16)] = 84,
  [SMALL_STATE(17)] = 88,
  [SMALL_STATE(18)] = 92,
  [SMALL_STATE(19)] = 96,
  [SMALL_STATE(20)] = 100,
  [SMALL_STATE(21)] = 104,
  [SMALL_STATE(22)] = 108,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_l6, 3, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_l5, 3, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_l4, 3, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_l3, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_l2, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heading_l1, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [65] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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

TS_PUBLIC const TSLanguage *tree_sitter_cta(void) {
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
