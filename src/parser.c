#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum {
  aux_sym_source_token1 = 1,
  anon_sym_diff = 2,
  anon_sym_DASH_DASHgit = 3,
  aux_sym_file_change_token1 = 4,
  anon_sym_file = 5,
  anon_sym_mode = 6,
  anon_sym_from = 7,
  anon_sym_to = 8,
  anon_sym_Binary = 9,
  anon_sym_files = 10,
  anon_sym_and = 11,
  anon_sym_differ = 12,
  anon_sym_index = 13,
  anon_sym_DOT_DOT = 14,
  anon_sym_similarity = 15,
  anon_sym_index2 = 16,
  aux_sym_similarity_token1 = 17,
  anon_sym_PERCENT = 18,
  anon_sym_DASH_DASH_DASH = 19,
  anon_sym_PLUS_PLUS_PLUS = 20,
  anon_sym_AT_AT = 21,
  anon_sym_AT_AT2 = 22,
  aux_sym_location_token1 = 23,
  anon_sym_PLUS = 24,
  anon_sym_PLUS_PLUS = 25,
  anon_sym_PLUS_PLUS_PLUS_PLUS = 26,
  anon_sym_DASH = 27,
  anon_sym_DASH_DASH = 28,
  anon_sym_DASH_DASH_DASH_DASH = 29,
  sym_context = 30,
  sym_linerange = 31,
  sym_filename = 32,
  sym_commit = 33,
  sym_source = 34,
  sym__line = 35,
  sym_command = 36,
  sym_file_change = 37,
  sym_binary_change = 38,
  sym_index = 39,
  sym_similarity = 40,
  sym_old_file = 41,
  sym_new_file = 42,
  sym_location = 43,
  sym_addition = 44,
  sym_deletion = 45,
  sym_mode = 46,
  aux_sym_source_repeat1 = 47,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_diff] = "diff",
  [anon_sym_DASH_DASHgit] = "--git",
  [aux_sym_file_change_token1] = "file_change_token1",
  [anon_sym_file] = "file",
  [anon_sym_mode] = "mode",
  [anon_sym_from] = "from",
  [anon_sym_to] = "to",
  [anon_sym_Binary] = "Binary",
  [anon_sym_files] = "files",
  [anon_sym_and] = "and",
  [anon_sym_differ] = "differ",
  [anon_sym_index] = "index",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_similarity] = "similarity",
  [anon_sym_index2] = "index",
  [aux_sym_similarity_token1] = "similarity_token1",
  [anon_sym_PERCENT] = "%",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_PLUS_PLUS_PLUS] = "+++",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_AT2] = "@@",
  [aux_sym_location_token1] = "location_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = "++++",
  [anon_sym_DASH] = "-",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_DASH_DASH_DASH_DASH] = "----",
  [sym_context] = "context",
  [sym_linerange] = "linerange",
  [sym_filename] = "filename",
  [sym_commit] = "commit",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_command] = "command",
  [sym_file_change] = "file_change",
  [sym_binary_change] = "binary_change",
  [sym_index] = "index",
  [sym_similarity] = "similarity",
  [sym_old_file] = "old_file",
  [sym_new_file] = "new_file",
  [sym_location] = "location",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [sym_mode] = "mode",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_diff] = anon_sym_diff,
  [anon_sym_DASH_DASHgit] = anon_sym_DASH_DASHgit,
  [aux_sym_file_change_token1] = aux_sym_file_change_token1,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_Binary] = anon_sym_Binary,
  [anon_sym_files] = anon_sym_files,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_differ] = anon_sym_differ,
  [anon_sym_index] = anon_sym_index,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_similarity] = anon_sym_similarity,
  [anon_sym_index2] = anon_sym_index,
  [aux_sym_similarity_token1] = aux_sym_similarity_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT_AT2] = anon_sym_AT_AT,
  [aux_sym_location_token1] = aux_sym_location_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = anon_sym_PLUS_PLUS_PLUS_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_DASH_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH_DASH,
  [sym_context] = sym_context,
  [sym_linerange] = sym_linerange,
  [sym_filename] = sym_filename,
  [sym_commit] = sym_commit,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_command] = sym_command,
  [sym_file_change] = sym_file_change,
  [sym_binary_change] = sym_binary_change,
  [sym_index] = sym_index,
  [sym_similarity] = sym_similarity,
  [sym_old_file] = sym_old_file,
  [sym_new_file] = sym_new_file,
  [sym_location] = sym_location,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [sym_mode] = sym_mode,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_diff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASHgit] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_change_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Binary] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_files] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_differ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_similarity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_index2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_similarity_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT_AT2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_location_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_context] = {
    .visible = true,
    .named = true,
  },
  [sym_linerange] = {
    .visible = true,
    .named = true,
  },
  [sym_filename] = {
    .visible = true,
    .named = true,
  },
  [sym_commit] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_file_change] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_change] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_similarity] = {
    .visible = true,
    .named = true,
  },
  [sym_old_file] = {
    .visible = true,
    .named = true,
  },
  [sym_new_file] = {
    .visible = true,
    .named = true,
  },
  [sym_location] = {
    .visible = true,
    .named = true,
  },
  [sym_addition] = {
    .visible = true,
    .named = true,
  },
  [sym_deletion] = {
    .visible = true,
    .named = true,
  },
  [sym_mode] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_score = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_score] = "score",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_score, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = sym_old_file,
    [3] = sym_new_file,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(143);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == 'B') ADVANCE(35);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == 't') ADVANCE(56);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(85);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == '@') ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(89);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(87);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(78);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(38);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'r') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(93);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 60:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 66:
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 67:
      if (lookahead == 'x') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 'x') ADVANCE(102);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 70:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(143);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(51);
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 't') ADVANCE(56);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(79)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 80:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(150);
      if (lookahead == '-') ADVANCE(153);
      if (lookahead == '@') ADVANCE(157);
      if (lookahead == 'B') ADVANCE(173);
      if (lookahead == 'd') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead == 'n') ADVANCE(165);
      if (lookahead == 'r') ADVANCE(169);
      if (lookahead == 's') ADVANCE(172);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 81:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 't') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 82:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(82)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(194);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 83:
      if (eof) ADVANCE(84);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0) ADVANCE(149);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead == '-') ADVANCE(155);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(152);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(149);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(145);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(144);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(85);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(156);
      if (lookahead != 0) ADVANCE(191);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(176);
      if (lookahead == 'i') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 80},
  [2] = {.lex_state = 80},
  [3] = {.lex_state = 80},
  [4] = {.lex_state = 80},
  [5] = {.lex_state = 81},
  [6] = {.lex_state = 83},
  [7] = {.lex_state = 82},
  [8] = {.lex_state = 82},
  [9] = {.lex_state = 83},
  [10] = {.lex_state = 83},
  [11] = {.lex_state = 81},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 81},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 81},
  [29] = {.lex_state = 82},
  [30] = {.lex_state = 81},
  [31] = {.lex_state = 81},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 29},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 81},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 82},
  [39] = {.lex_state = 82},
  [40] = {.lex_state = 82},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 82},
  [43] = {.lex_state = 81},
  [44] = {.lex_state = 81},
  [45] = {.lex_state = 81},
  [46] = {.lex_state = 29},
  [47] = {.lex_state = 29},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [aux_sym_file_change_token1] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_Binary] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_differ] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_similarity] = ACTIONS(1),
    [anon_sym_index2] = ACTIONS(1),
    [aux_sym_similarity_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(27),
    [sym__line] = STATE(14),
    [sym_command] = STATE(14),
    [sym_file_change] = STATE(14),
    [sym_binary_change] = STATE(14),
    [sym_index] = STATE(14),
    [sym_similarity] = STATE(14),
    [sym_old_file] = STATE(14),
    [sym_new_file] = STATE(14),
    [sym_location] = STATE(14),
    [sym_addition] = STATE(14),
    [sym_deletion] = STATE(14),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(29),
    [sym_context] = ACTIONS(31),
  },
  [2] = {
    [sym__line] = STATE(36),
    [sym_command] = STATE(36),
    [sym_file_change] = STATE(36),
    [sym_binary_change] = STATE(36),
    [sym_index] = STATE(36),
    [sym_similarity] = STATE(36),
    [sym_old_file] = STATE(36),
    [sym_new_file] = STATE(36),
    [sym_location] = STATE(36),
    [sym_addition] = STATE(36),
    [sym_deletion] = STATE(36),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_source_token1] = ACTIONS(35),
    [anon_sym_diff] = ACTIONS(38),
    [aux_sym_file_change_token1] = ACTIONS(41),
    [anon_sym_Binary] = ACTIONS(44),
    [anon_sym_index] = ACTIONS(47),
    [anon_sym_similarity] = ACTIONS(50),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(53),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(56),
    [anon_sym_AT_AT] = ACTIONS(59),
    [anon_sym_PLUS] = ACTIONS(62),
    [anon_sym_PLUS_PLUS] = ACTIONS(62),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(68),
    [anon_sym_DASH_DASH] = ACTIONS(68),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(71),
    [sym_context] = ACTIONS(74),
  },
  [3] = {
    [sym__line] = STATE(12),
    [sym_command] = STATE(12),
    [sym_file_change] = STATE(12),
    [sym_binary_change] = STATE(12),
    [sym_index] = STATE(12),
    [sym_similarity] = STATE(12),
    [sym_old_file] = STATE(12),
    [sym_new_file] = STATE(12),
    [sym_location] = STATE(12),
    [sym_addition] = STATE(12),
    [sym_deletion] = STATE(12),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(77),
    [aux_sym_source_token1] = ACTIONS(79),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_PLUS_PLUS] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_DASH] = ACTIONS(27),
    [anon_sym_DASH_DASH] = ACTIONS(27),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(29),
    [sym_context] = ACTIONS(81),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(83), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
  [22] = 3,
    ACTIONS(87), 1,
      aux_sym_similarity_token1,
    STATE(16), 1,
      sym_mode,
    ACTIONS(85), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [33] = 3,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      aux_sym_source_token1,
    ACTIONS(93), 1,
      aux_sym_location_token1,
  [43] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_source_token1,
    ACTIONS(99), 1,
      sym_filename,
  [53] = 3,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    ACTIONS(105), 1,
      sym_filename,
  [63] = 3,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    ACTIONS(107), 1,
      aux_sym_location_token1,
  [73] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_source_token1,
    ACTIONS(109), 1,
      aux_sym_location_token1,
  [83] = 2,
    ACTIONS(111), 1,
      anon_sym_file,
    ACTIONS(113), 2,
      anon_sym_from,
      anon_sym_to,
  [91] = 2,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      aux_sym_source_token1,
  [98] = 1,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [103] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      aux_sym_source_token1,
  [110] = 1,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [115] = 1,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [120] = 1,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [125] = 1,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [130] = 1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [135] = 1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [140] = 2,
    ACTIONS(87), 1,
      aux_sym_similarity_token1,
    STATE(17), 1,
      sym_mode,
  [147] = 1,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [152] = 1,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [157] = 1,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [162] = 1,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [167] = 1,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [172] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [176] = 1,
    ACTIONS(145), 1,
      anon_sym_DASH_DASHgit,
  [180] = 1,
    ACTIONS(147), 1,
      sym_filename,
  [184] = 1,
    ACTIONS(149), 1,
      sym_linerange,
  [188] = 1,
    ACTIONS(151), 1,
      aux_sym_similarity_token1,
  [192] = 1,
    ACTIONS(153), 1,
      anon_sym_and,
  [196] = 1,
    ACTIONS(155), 1,
      sym_commit,
  [200] = 1,
    ACTIONS(157), 1,
      anon_sym_PERCENT,
  [204] = 1,
    ACTIONS(159), 1,
      anon_sym_AT_AT2,
  [208] = 1,
    ACTIONS(117), 1,
      aux_sym_source_token1,
  [212] = 1,
    ACTIONS(161), 1,
      anon_sym_DOT_DOT,
  [216] = 1,
    ACTIONS(163), 1,
      sym_filename,
  [220] = 1,
    ACTIONS(165), 1,
      sym_filename,
  [224] = 1,
    ACTIONS(167), 1,
      sym_filename,
  [228] = 1,
    ACTIONS(169), 1,
      anon_sym_mode,
  [232] = 1,
    ACTIONS(171), 1,
      sym_filename,
  [236] = 1,
    ACTIONS(173), 1,
      sym_linerange,
  [240] = 1,
    ACTIONS(175), 1,
      anon_sym_differ,
  [244] = 1,
    ACTIONS(177), 1,
      anon_sym_index2,
  [248] = 1,
    ACTIONS(179), 1,
      sym_commit,
  [252] = 1,
    ACTIONS(181), 1,
      anon_sym_files,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 33,
  [SMALL_STATE(7)] = 43,
  [SMALL_STATE(8)] = 53,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 73,
  [SMALL_STATE(11)] = 83,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 98,
  [SMALL_STATE(14)] = 103,
  [SMALL_STATE(15)] = 110,
  [SMALL_STATE(16)] = 115,
  [SMALL_STATE(17)] = 120,
  [SMALL_STATE(18)] = 125,
  [SMALL_STATE(19)] = 130,
  [SMALL_STATE(20)] = 135,
  [SMALL_STATE(21)] = 140,
  [SMALL_STATE(22)] = 147,
  [SMALL_STATE(23)] = 152,
  [SMALL_STATE(24)] = 157,
  [SMALL_STATE(25)] = 162,
  [SMALL_STATE(26)] = 167,
  [SMALL_STATE(27)] = 172,
  [SMALL_STATE(28)] = 176,
  [SMALL_STATE(29)] = 180,
  [SMALL_STATE(30)] = 184,
  [SMALL_STATE(31)] = 188,
  [SMALL_STATE(32)] = 192,
  [SMALL_STATE(33)] = 196,
  [SMALL_STATE(34)] = 200,
  [SMALL_STATE(35)] = 204,
  [SMALL_STATE(36)] = 208,
  [SMALL_STATE(37)] = 212,
  [SMALL_STATE(38)] = 216,
  [SMALL_STATE(39)] = 220,
  [SMALL_STATE(40)] = 224,
  [SMALL_STATE(41)] = 228,
  [SMALL_STATE(42)] = 232,
  [SMALL_STATE(43)] = 236,
  [SMALL_STATE(44)] = 240,
  [SMALL_STATE(45)] = 244,
  [SMALL_STATE(46)] = 248,
  [SMALL_STATE(47)] = 252,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(28),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(47),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(46),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(45),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(43),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4, .production_id = 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_diff(void) {
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
