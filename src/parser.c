#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

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
  aux_sym_filename_token1 = 32,
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
  sym_filename = 46,
  sym_mode = 47,
  aux_sym_source_repeat1 = 48,
  aux_sym_filename_repeat1 = 49,
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
  [aux_sym_filename_token1] = "filename_token1",
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
  [sym_filename] = "filename",
  [sym_mode] = "mode",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_filename_repeat1] = "filename_repeat1",
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
  [aux_sym_filename_token1] = aux_sym_filename_token1,
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
  [sym_filename] = sym_filename,
  [sym_mode] = sym_mode,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
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
  [aux_sym_filename_token1] = {
    .visible = false,
    .named = false,
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
  [sym_filename] = {
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
  [aux_sym_filename_repeat1] = {
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
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_score, 2},
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
  [12] = 8,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 8,
  [20] = 7,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(147);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '@') ADVANCE(4);
      if (lookahead == 'B') ADVANCE(37);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 'n') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(27);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 't') ADVANCE(58);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '@') ADVANCE(150);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(151);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(208);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(208);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(31)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(80);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(95);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(18);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 61:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 68:
      if (lookahead == 'w') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 'x') ADVANCE(103);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(97);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(105);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(147);
      if (lookahead == '.') ADVANCE(3);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(53);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 'm') ADVANCE(60);
      if (lookahead == 't') ADVANCE(58);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(81)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 82:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '@') ADVANCE(161);
      if (lookahead == 'B') ADVANCE(177);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'r') ADVANCE(173);
      if (lookahead == 's') ADVANCE(176);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 83:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(73);
      if (lookahead == '-') ADVANCE(2);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(41);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(57);
      if (lookahead == 't') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 84:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(84)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(207);
      if (lookahead != 0) ADVANCE(208);
      END_STATE();
    case 85:
      if (eof) ADVANCE(86);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead == '-') ADVANCE(159);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(156);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(149);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(148);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(87);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0) ADVANCE(195);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(180);
      if (lookahead == 'i') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(205);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(204);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(208);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_commit);
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
    case 230:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 82},
  [2] = {.lex_state = 82},
  [3] = {.lex_state = 82},
  [4] = {.lex_state = 82},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 84},
  [9] = {.lex_state = 83},
  [10] = {.lex_state = 85},
  [11] = {.lex_state = 85},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 84},
  [14] = {.lex_state = 85},
  [15] = {.lex_state = 84},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 84},
  [18] = {.lex_state = 84},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 83},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 83},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 83},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 83},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 31},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 83},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 83},
  [48] = {.lex_state = 83},
  [49] = {.lex_state = 83},
  [50] = {.lex_state = 83},
  [51] = {.lex_state = 31},
  [52] = {.lex_state = 31},
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
    [sym_source] = STATE(44),
    [sym__line] = STATE(34),
    [sym_command] = STATE(34),
    [sym_file_change] = STATE(34),
    [sym_binary_change] = STATE(34),
    [sym_index] = STATE(34),
    [sym_similarity] = STATE(34),
    [sym_old_file] = STATE(34),
    [sym_new_file] = STATE(34),
    [sym_location] = STATE(34),
    [sym_addition] = STATE(34),
    [sym_deletion] = STATE(34),
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
    [sym__line] = STATE(38),
    [sym_command] = STATE(38),
    [sym_file_change] = STATE(38),
    [sym_binary_change] = STATE(38),
    [sym_index] = STATE(38),
    [sym_similarity] = STATE(38),
    [sym_old_file] = STATE(38),
    [sym_new_file] = STATE(38),
    [sym_location] = STATE(38),
    [sym_addition] = STATE(38),
    [sym_deletion] = STATE(38),
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
    [sym__line] = STATE(28),
    [sym_command] = STATE(28),
    [sym_file_change] = STATE(28),
    [sym_binary_change] = STATE(28),
    [sym_index] = STATE(28),
    [sym_similarity] = STATE(28),
    [sym_old_file] = STATE(28),
    [sym_new_file] = STATE(28),
    [sym_location] = STATE(28),
    [sym_addition] = STATE(28),
    [sym_deletion] = STATE(28),
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
  [22] = 5,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym_source_token1,
    ACTIONS(89), 1,
      aux_sym_filename_token1,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(23), 1,
      sym_filename,
  [38] = 5,
    ACTIONS(89), 1,
      aux_sym_filename_token1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      aux_sym_source_token1,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(24), 1,
      sym_filename,
  [54] = 4,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      aux_sym_source_token1,
    ACTIONS(99), 1,
      aux_sym_filename_token1,
    STATE(8), 1,
      aux_sym_filename_repeat1,
  [67] = 4,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      aux_sym_source_token1,
    ACTIONS(105), 1,
      aux_sym_filename_token1,
    STATE(8), 1,
      aux_sym_filename_repeat1,
  [80] = 3,
    ACTIONS(110), 1,
      aux_sym_similarity_token1,
    STATE(29), 1,
      sym_mode,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [91] = 3,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      aux_sym_source_token1,
    ACTIONS(112), 1,
      aux_sym_location_token1,
  [101] = 3,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 1,
      aux_sym_source_token1,
    ACTIONS(114), 1,
      aux_sym_location_token1,
  [111] = 3,
    ACTIONS(103), 1,
      anon_sym_differ,
    ACTIONS(116), 1,
      aux_sym_filename_token1,
    STATE(12), 1,
      aux_sym_filename_repeat1,
  [121] = 3,
    ACTIONS(119), 1,
      aux_sym_filename_token1,
    STATE(20), 1,
      aux_sym_filename_repeat1,
    STATE(45), 1,
      sym_filename,
  [131] = 3,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
    ACTIONS(123), 1,
      aux_sym_source_token1,
    ACTIONS(125), 1,
      aux_sym_location_token1,
  [141] = 3,
    ACTIONS(89), 1,
      aux_sym_filename_token1,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(30), 1,
      sym_filename,
  [151] = 3,
    ACTIONS(97), 1,
      anon_sym_and,
    ACTIONS(127), 1,
      aux_sym_filename_token1,
    STATE(19), 1,
      aux_sym_filename_repeat1,
  [161] = 3,
    ACTIONS(89), 1,
      aux_sym_filename_token1,
    STATE(7), 1,
      aux_sym_filename_repeat1,
    STATE(32), 1,
      sym_filename,
  [171] = 3,
    ACTIONS(129), 1,
      aux_sym_filename_token1,
    STATE(16), 1,
      aux_sym_filename_repeat1,
    STATE(46), 1,
      sym_filename,
  [181] = 3,
    ACTIONS(103), 1,
      anon_sym_and,
    ACTIONS(131), 1,
      aux_sym_filename_token1,
    STATE(19), 1,
      aux_sym_filename_repeat1,
  [191] = 3,
    ACTIONS(97), 1,
      anon_sym_differ,
    ACTIONS(134), 1,
      aux_sym_filename_token1,
    STATE(12), 1,
      aux_sym_filename_repeat1,
  [201] = 2,
    ACTIONS(136), 1,
      anon_sym_file,
    ACTIONS(138), 2,
      anon_sym_from,
      anon_sym_to,
  [209] = 1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [214] = 1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [219] = 1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [224] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [229] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [234] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [239] = 2,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym_source_token1,
  [246] = 1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [251] = 1,
    ACTIONS(158), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [256] = 2,
    ACTIONS(110), 1,
      aux_sym_similarity_token1,
    STATE(35), 1,
      sym_mode,
  [263] = 1,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [268] = 1,
    ACTIONS(162), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [273] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(154), 1,
      aux_sym_source_token1,
  [280] = 1,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [285] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [290] = 1,
    ACTIONS(168), 1,
      anon_sym_AT_AT2,
  [294] = 1,
    ACTIONS(154), 1,
      aux_sym_source_token1,
  [298] = 1,
    ACTIONS(170), 1,
      sym_linerange,
  [302] = 1,
    ACTIONS(172), 1,
      anon_sym_DOT_DOT,
  [306] = 1,
    ACTIONS(174), 1,
      anon_sym_mode,
  [310] = 1,
    ACTIONS(176), 1,
      anon_sym_PERCENT,
  [314] = 1,
    ACTIONS(178), 1,
      sym_commit,
  [318] = 1,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
  [322] = 1,
    ACTIONS(182), 1,
      anon_sym_differ,
  [326] = 1,
    ACTIONS(184), 1,
      anon_sym_and,
  [330] = 1,
    ACTIONS(186), 1,
      aux_sym_similarity_token1,
  [334] = 1,
    ACTIONS(188), 1,
      anon_sym_DASH_DASHgit,
  [338] = 1,
    ACTIONS(190), 1,
      sym_linerange,
  [342] = 1,
    ACTIONS(192), 1,
      anon_sym_index2,
  [346] = 1,
    ACTIONS(194), 1,
      sym_commit,
  [350] = 1,
    ACTIONS(196), 1,
      anon_sym_files,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 67,
  [SMALL_STATE(9)] = 80,
  [SMALL_STATE(10)] = 91,
  [SMALL_STATE(11)] = 101,
  [SMALL_STATE(12)] = 111,
  [SMALL_STATE(13)] = 121,
  [SMALL_STATE(14)] = 131,
  [SMALL_STATE(15)] = 141,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 161,
  [SMALL_STATE(18)] = 171,
  [SMALL_STATE(19)] = 181,
  [SMALL_STATE(20)] = 191,
  [SMALL_STATE(21)] = 201,
  [SMALL_STATE(22)] = 209,
  [SMALL_STATE(23)] = 214,
  [SMALL_STATE(24)] = 219,
  [SMALL_STATE(25)] = 224,
  [SMALL_STATE(26)] = 229,
  [SMALL_STATE(27)] = 234,
  [SMALL_STATE(28)] = 239,
  [SMALL_STATE(29)] = 246,
  [SMALL_STATE(30)] = 251,
  [SMALL_STATE(31)] = 256,
  [SMALL_STATE(32)] = 263,
  [SMALL_STATE(33)] = 268,
  [SMALL_STATE(34)] = 273,
  [SMALL_STATE(35)] = 280,
  [SMALL_STATE(36)] = 285,
  [SMALL_STATE(37)] = 290,
  [SMALL_STATE(38)] = 294,
  [SMALL_STATE(39)] = 298,
  [SMALL_STATE(40)] = 302,
  [SMALL_STATE(41)] = 306,
  [SMALL_STATE(42)] = 310,
  [SMALL_STATE(43)] = 314,
  [SMALL_STATE(44)] = 318,
  [SMALL_STATE(45)] = 322,
  [SMALL_STATE(46)] = 326,
  [SMALL_STATE(47)] = 330,
  [SMALL_STATE(48)] = 334,
  [SMALL_STATE(49)] = 338,
  [SMALL_STATE(50)] = 342,
  [SMALL_STATE(51)] = 346,
  [SMALL_STATE(52)] = 350,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(51),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(50),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(49),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(38),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(8),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(19),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [180] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
