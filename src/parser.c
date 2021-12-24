#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 38
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_index = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_similarity = 11,
  anon_sym_index2 = 12,
  aux_sym_similarity_token1 = 13,
  anon_sym_PERCENT = 14,
  aux_sym_file_token1 = 15,
  anon_sym_AT_AT = 16,
  anon_sym_AT_AT2 = 17,
  aux_sym_location_token1 = 18,
  anon_sym_PLUS = 19,
  anon_sym_DASH = 20,
  sym_context = 21,
  sym_linerange = 22,
  sym_commit = 23,
  sym_source = 24,
  sym__line = 25,
  sym_command = 26,
  sym_file_change = 27,
  sym_index = 28,
  sym_similarity = 29,
  sym_file = 30,
  sym_location = 31,
  sym_addition = 32,
  sym_deletion = 33,
  sym_filename = 34,
  sym_mode = 35,
  aux_sym_source_repeat1 = 36,
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
  [anon_sym_index] = "index",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_similarity] = "similarity",
  [anon_sym_index2] = "index",
  [aux_sym_similarity_token1] = "similarity_token1",
  [anon_sym_PERCENT] = "%",
  [aux_sym_file_token1] = "file_token1",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_AT2] = "@@",
  [aux_sym_location_token1] = "location_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_context] = "context",
  [sym_linerange] = "linerange",
  [sym_commit] = "commit",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_command] = "command",
  [sym_file_change] = "file_change",
  [sym_index] = "index",
  [sym_similarity] = "similarity",
  [sym_file] = "file",
  [sym_location] = "location",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [sym_filename] = "filename",
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
  [anon_sym_index] = anon_sym_index,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_similarity] = anon_sym_similarity,
  [anon_sym_index2] = anon_sym_index,
  [aux_sym_similarity_token1] = aux_sym_similarity_token1,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [aux_sym_file_token1] = aux_sym_file_token1,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT_AT2] = anon_sym_AT_AT,
  [aux_sym_location_token1] = aux_sym_location_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_context] = sym_context,
  [sym_linerange] = sym_linerange,
  [sym_commit] = sym_commit,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_command] = sym_command,
  [sym_file_change] = sym_file_change,
  [sym_index] = sym_index,
  [sym_similarity] = sym_similarity,
  [sym_file] = sym_file,
  [sym_location] = sym_location,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [sym_filename] = sym_filename,
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
  [aux_sym_file_token1] = {
    .visible = false,
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
  [anon_sym_DASH] = {
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
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_similarity] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '+') ADVANCE(125);
      if (lookahead == '-') ADVANCE(127);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(31);
      if (lookahead == 't') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(56);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(120);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(76);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(121);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(122);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'g') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == 'w') ADVANCE(70);
      END_STATE();
    case 52:
      if (lookahead == 'x') ADVANCE(75);
      END_STATE();
    case 53:
      if (lookahead == 'x') ADVANCE(78);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(77);
      END_STATE();
    case 55:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(55)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      if (eof) ADVANCE(66);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(46);
      if (lookahead == 't') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(64)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 65:
      if (eof) ADVANCE(66);
      if (lookahead == '+') ADVANCE(126);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead == 'd') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(152);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == 's') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(161);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(123);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(4);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '+') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '-') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(133);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(160);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(161);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(174);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(188);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 65},
  [2] = {.lex_state = 65},
  [3] = {.lex_state = 65},
  [4] = {.lex_state = 65},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 55},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 55},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
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
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_similarity] = ACTIONS(1),
    [anon_sym_index2] = ACTIONS(1),
    [aux_sym_similarity_token1] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(23),
    [sym__line] = STATE(26),
    [sym_command] = STATE(26),
    [sym_file_change] = STATE(26),
    [sym_index] = STATE(26),
    [sym_similarity] = STATE(26),
    [sym_file] = STATE(26),
    [sym_location] = STATE(26),
    [sym_addition] = STATE(26),
    [sym_deletion] = STATE(26),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_diff] = ACTIONS(5),
    [aux_sym_file_change_token1] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_similarity] = ACTIONS(11),
    [aux_sym_file_token1] = ACTIONS(13),
    [anon_sym_AT_AT] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [sym_context] = ACTIONS(21),
  },
  [2] = {
    [sym__line] = STATE(26),
    [sym_command] = STATE(26),
    [sym_file_change] = STATE(26),
    [sym_index] = STATE(26),
    [sym_similarity] = STATE(26),
    [sym_file] = STATE(26),
    [sym_location] = STATE(26),
    [sym_addition] = STATE(26),
    [sym_deletion] = STATE(26),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(23),
    [anon_sym_diff] = ACTIONS(25),
    [aux_sym_file_change_token1] = ACTIONS(28),
    [anon_sym_index] = ACTIONS(31),
    [anon_sym_similarity] = ACTIONS(34),
    [aux_sym_file_token1] = ACTIONS(37),
    [anon_sym_AT_AT] = ACTIONS(40),
    [anon_sym_PLUS] = ACTIONS(43),
    [anon_sym_DASH] = ACTIONS(46),
    [sym_context] = ACTIONS(49),
  },
  [3] = {
    [sym__line] = STATE(26),
    [sym_command] = STATE(26),
    [sym_file_change] = STATE(26),
    [sym_index] = STATE(26),
    [sym_similarity] = STATE(26),
    [sym_file] = STATE(26),
    [sym_location] = STATE(26),
    [sym_addition] = STATE(26),
    [sym_deletion] = STATE(26),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(52),
    [anon_sym_diff] = ACTIONS(5),
    [aux_sym_file_change_token1] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(9),
    [anon_sym_similarity] = ACTIONS(11),
    [aux_sym_file_token1] = ACTIONS(13),
    [anon_sym_AT_AT] = ACTIONS(15),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(19),
    [sym_context] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(54), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(23), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_index,
      anon_sym_similarity,
      aux_sym_file_token1,
      anon_sym_AT_AT,
  [15] = 3,
    ACTIONS(56), 1,
      aux_sym_source_token1,
    ACTIONS(58), 1,
      aux_sym_similarity_token1,
    STATE(36), 1,
      sym_mode,
  [25] = 2,
    ACTIONS(60), 1,
      anon_sym_file,
    ACTIONS(62), 2,
      anon_sym_from,
      anon_sym_to,
  [33] = 2,
    ACTIONS(64), 1,
      aux_sym_location_token1,
    STATE(25), 1,
      sym_filename,
  [40] = 2,
    ACTIONS(58), 1,
      aux_sym_similarity_token1,
    STATE(32), 1,
      sym_mode,
  [47] = 2,
    ACTIONS(64), 1,
      aux_sym_location_token1,
    STATE(19), 1,
      sym_filename,
  [54] = 2,
    ACTIONS(66), 1,
      aux_sym_source_token1,
    ACTIONS(68), 1,
      aux_sym_location_token1,
  [61] = 2,
    ACTIONS(70), 1,
      aux_sym_source_token1,
    ACTIONS(72), 1,
      aux_sym_location_token1,
  [68] = 2,
    ACTIONS(64), 1,
      aux_sym_location_token1,
    STATE(27), 1,
      sym_filename,
  [75] = 1,
    ACTIONS(74), 1,
      aux_sym_source_token1,
  [79] = 1,
    ACTIONS(76), 1,
      anon_sym_index2,
  [83] = 1,
    ACTIONS(78), 1,
      anon_sym_mode,
  [87] = 1,
    ACTIONS(80), 1,
      anon_sym_DOT_DOT,
  [91] = 1,
    ACTIONS(82), 1,
      aux_sym_similarity_token1,
  [95] = 1,
    ACTIONS(84), 1,
      anon_sym_DASH_DASHgit,
  [99] = 1,
    ACTIONS(86), 1,
      aux_sym_source_token1,
  [103] = 1,
    ACTIONS(88), 1,
      sym_linerange,
  [107] = 1,
    ACTIONS(90), 1,
      aux_sym_source_token1,
  [111] = 1,
    ACTIONS(92), 1,
      aux_sym_source_token1,
  [115] = 1,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
  [119] = 1,
    ACTIONS(96), 1,
      sym_linerange,
  [123] = 1,
    ACTIONS(98), 1,
      aux_sym_source_token1,
  [127] = 1,
    ACTIONS(100), 1,
      aux_sym_source_token1,
  [131] = 1,
    ACTIONS(102), 1,
      aux_sym_source_token1,
  [135] = 1,
    ACTIONS(104), 1,
      sym_commit,
  [139] = 1,
    ACTIONS(106), 1,
      anon_sym_PERCENT,
  [143] = 1,
    ACTIONS(108), 1,
      anon_sym_AT_AT2,
  [147] = 1,
    ACTIONS(110), 1,
      aux_sym_source_token1,
  [151] = 1,
    ACTIONS(112), 1,
      aux_sym_source_token1,
  [155] = 1,
    ACTIONS(114), 1,
      sym_commit,
  [159] = 1,
    ACTIONS(116), 1,
      aux_sym_source_token1,
  [163] = 1,
    ACTIONS(118), 1,
      aux_sym_location_token1,
  [167] = 1,
    ACTIONS(120), 1,
      aux_sym_source_token1,
  [171] = 1,
    ACTIONS(122), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 25,
  [SMALL_STATE(7)] = 33,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 54,
  [SMALL_STATE(11)] = 61,
  [SMALL_STATE(12)] = 68,
  [SMALL_STATE(13)] = 75,
  [SMALL_STATE(14)] = 79,
  [SMALL_STATE(15)] = 83,
  [SMALL_STATE(16)] = 87,
  [SMALL_STATE(17)] = 91,
  [SMALL_STATE(18)] = 95,
  [SMALL_STATE(19)] = 99,
  [SMALL_STATE(20)] = 103,
  [SMALL_STATE(21)] = 107,
  [SMALL_STATE(22)] = 111,
  [SMALL_STATE(23)] = 115,
  [SMALL_STATE(24)] = 119,
  [SMALL_STATE(25)] = 123,
  [SMALL_STATE(26)] = 127,
  [SMALL_STATE(27)] = 131,
  [SMALL_STATE(28)] = 135,
  [SMALL_STATE(29)] = 139,
  [SMALL_STATE(30)] = 143,
  [SMALL_STATE(31)] = 147,
  [SMALL_STATE(32)] = 151,
  [SMALL_STATE(33)] = 155,
  [SMALL_STATE(34)] = 159,
  [SMALL_STATE(35)] = 163,
  [SMALL_STATE(36)] = 167,
  [SMALL_STATE(37)] = 171,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(33),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [94] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gitdiff(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
