#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 36
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 36
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
  aux_sym_file_token1 = 14,
  anon_sym_AT_AT = 15,
  anon_sym_AT_AT2 = 16,
  aux_sym_location_token1 = 17,
  anon_sym_PLUS = 18,
  anon_sym_DASH = 19,
  sym_context = 20,
  sym_linerange = 21,
  sym_commit = 22,
  sym_mode = 23,
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
  aux_sym_source_repeat1 = 35,
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
  [aux_sym_file_token1] = "file_token1",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_AT2] = "@@",
  [aux_sym_location_token1] = "location_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_context] = "context",
  [sym_linerange] = "linerange",
  [sym_commit] = "commit",
  [sym_mode] = "mode",
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
  [aux_sym_file_token1] = aux_sym_file_token1,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT_AT2] = anon_sym_AT_AT,
  [aux_sym_location_token1] = aux_sym_location_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_context] = sym_context,
  [sym_linerange] = sym_linerange,
  [sym_commit] = sym_commit,
  [sym_mode] = sym_mode,
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
  [sym_mode] = {
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
      if (eof) ADVANCE(67);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(24);
      if (lookahead == 's') ADVANCE(32);
      if (lookahead == 't') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(68);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0) ADVANCE(85);
      END_STATE();
    case 4:
      if (lookahead == '%') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '+') ADVANCE(81);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(77);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(82);
      END_STATE();
    case 11:
      if (lookahead == '@') ADVANCE(83);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(71);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'g') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == 'r') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(74);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 'w') ADVANCE(71);
      END_STATE();
    case 53:
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 'x') ADVANCE(79);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(56)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(57);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == '@') ADVANCE(11);
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 't') ADVANCE(45);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(64);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '@') ADVANCE(92);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == 's') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(122);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(5);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(90);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(110);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_mode);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 66},
  [3] = {.lex_state = 66},
  [4] = {.lex_state = 66},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 56},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_DASH_DASHgit] = ACTIONS(1),
    [aux_sym_file_change_token1] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_similarity] = ACTIONS(1),
    [anon_sym_index2] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_linerange] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(23),
    [sym__line] = STATE(14),
    [sym_command] = STATE(14),
    [sym_file_change] = STATE(14),
    [sym_index] = STATE(14),
    [sym_similarity] = STATE(14),
    [sym_file] = STATE(14),
    [sym_location] = STATE(14),
    [sym_addition] = STATE(14),
    [sym_deletion] = STATE(14),
    [aux_sym_source_repeat1] = STATE(2),
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
    [sym__line] = STATE(14),
    [sym_command] = STATE(14),
    [sym_file_change] = STATE(14),
    [sym_index] = STATE(14),
    [sym_similarity] = STATE(14),
    [sym_file] = STATE(14),
    [sym_location] = STATE(14),
    [sym_addition] = STATE(14),
    [sym_deletion] = STATE(14),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(23),
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
  [3] = {
    [sym__line] = STATE(14),
    [sym_command] = STATE(14),
    [sym_file_change] = STATE(14),
    [sym_index] = STATE(14),
    [sym_similarity] = STATE(14),
    [sym_file] = STATE(14),
    [sym_location] = STATE(14),
    [sym_addition] = STATE(14),
    [sym_deletion] = STATE(14),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_diff] = ACTIONS(27),
    [aux_sym_file_change_token1] = ACTIONS(30),
    [anon_sym_index] = ACTIONS(33),
    [anon_sym_similarity] = ACTIONS(36),
    [aux_sym_file_token1] = ACTIONS(39),
    [anon_sym_AT_AT] = ACTIONS(42),
    [anon_sym_PLUS] = ACTIONS(45),
    [anon_sym_DASH] = ACTIONS(48),
    [sym_context] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(54), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(25), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_index,
      anon_sym_similarity,
      aux_sym_file_token1,
      anon_sym_AT_AT,
  [15] = 2,
    ACTIONS(56), 1,
      anon_sym_file,
    ACTIONS(58), 2,
      anon_sym_from,
      anon_sym_to,
  [23] = 2,
    ACTIONS(60), 1,
      aux_sym_source_token1,
    ACTIONS(62), 1,
      sym_mode,
  [30] = 2,
    ACTIONS(64), 1,
      aux_sym_location_token1,
    STATE(19), 1,
      sym_filename,
  [37] = 2,
    ACTIONS(66), 1,
      aux_sym_source_token1,
    ACTIONS(68), 1,
      aux_sym_location_token1,
  [44] = 2,
    ACTIONS(70), 1,
      aux_sym_source_token1,
    ACTIONS(72), 1,
      aux_sym_location_token1,
  [51] = 2,
    ACTIONS(64), 1,
      aux_sym_location_token1,
    STATE(25), 1,
      sym_filename,
  [58] = 2,
    ACTIONS(64), 1,
      aux_sym_location_token1,
    STATE(27), 1,
      sym_filename,
  [65] = 1,
    ACTIONS(74), 1,
      aux_sym_source_token1,
  [69] = 1,
    ACTIONS(76), 1,
      sym_linerange,
  [73] = 1,
    ACTIONS(78), 1,
      aux_sym_source_token1,
  [77] = 1,
    ACTIONS(80), 1,
      anon_sym_mode,
  [81] = 1,
    ACTIONS(82), 1,
      anon_sym_DOT_DOT,
  [85] = 1,
    ACTIONS(84), 1,
      aux_sym_similarity_token1,
  [89] = 1,
    ACTIONS(86), 1,
      anon_sym_DASH_DASHgit,
  [93] = 1,
    ACTIONS(88), 1,
      aux_sym_source_token1,
  [97] = 1,
    ACTIONS(90), 1,
      sym_linerange,
  [101] = 1,
    ACTIONS(92), 1,
      aux_sym_source_token1,
  [105] = 1,
    ACTIONS(94), 1,
      aux_sym_source_token1,
  [109] = 1,
    ACTIONS(96), 1,
      ts_builtin_sym_end,
  [113] = 1,
    ACTIONS(98), 1,
      anon_sym_index2,
  [117] = 1,
    ACTIONS(100), 1,
      aux_sym_source_token1,
  [121] = 1,
    ACTIONS(102), 1,
      sym_mode,
  [125] = 1,
    ACTIONS(104), 1,
      aux_sym_source_token1,
  [129] = 1,
    ACTIONS(106), 1,
      sym_commit,
  [133] = 1,
    ACTIONS(108), 1,
      aux_sym_source_token1,
  [137] = 1,
    ACTIONS(110), 1,
      anon_sym_AT_AT2,
  [141] = 1,
    ACTIONS(112), 1,
      aux_sym_source_token1,
  [145] = 1,
    ACTIONS(114), 1,
      sym_commit,
  [149] = 1,
    ACTIONS(116), 1,
      aux_sym_location_token1,
  [153] = 1,
    ACTIONS(118), 1,
      aux_sym_source_token1,
  [157] = 1,
    ACTIONS(120), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 15,
  [SMALL_STATE(6)] = 23,
  [SMALL_STATE(7)] = 30,
  [SMALL_STATE(8)] = 37,
  [SMALL_STATE(9)] = 44,
  [SMALL_STATE(10)] = 51,
  [SMALL_STATE(11)] = 58,
  [SMALL_STATE(12)] = 65,
  [SMALL_STATE(13)] = 69,
  [SMALL_STATE(14)] = 73,
  [SMALL_STATE(15)] = 77,
  [SMALL_STATE(16)] = 81,
  [SMALL_STATE(17)] = 85,
  [SMALL_STATE(18)] = 89,
  [SMALL_STATE(19)] = 93,
  [SMALL_STATE(20)] = 97,
  [SMALL_STATE(21)] = 101,
  [SMALL_STATE(22)] = 105,
  [SMALL_STATE(23)] = 109,
  [SMALL_STATE(24)] = 113,
  [SMALL_STATE(25)] = 117,
  [SMALL_STATE(26)] = 121,
  [SMALL_STATE(27)] = 125,
  [SMALL_STATE(28)] = 129,
  [SMALL_STATE(29)] = 133,
  [SMALL_STATE(30)] = 137,
  [SMALL_STATE(31)] = 141,
  [SMALL_STATE(32)] = 145,
  [SMALL_STATE(33)] = 149,
  [SMALL_STATE(34)] = 153,
  [SMALL_STATE(35)] = 157,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(13),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(14),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [96] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 3, .production_id = 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
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
