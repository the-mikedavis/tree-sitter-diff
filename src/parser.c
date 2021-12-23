#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_token1 = 1,
  anon_sym_diff = 2,
  anon_sym_DASH_DASHgit = 3,
  anon_sym_index = 4,
  anon_sym_DOT_DOT = 5,
  aux_sym_file_token1 = 6,
  anon_sym_AT_AT = 7,
  anon_sym_AT_AT2 = 8,
  aux_sym_location_token1 = 9,
  anon_sym_PLUS = 10,
  anon_sym_DASH = 11,
  sym_context = 12,
  sym_linerange = 13,
  sym_commit = 14,
  sym_mode = 15,
  sym_source = 16,
  sym__line = 17,
  sym_command = 18,
  sym_index = 19,
  sym_file = 20,
  sym_location = 21,
  sym_addition = 22,
  sym_deletion = 23,
  sym_filename = 24,
  aux_sym_source_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_diff] = "diff",
  [anon_sym_DASH_DASHgit] = "--git",
  [anon_sym_index] = "index",
  [anon_sym_DOT_DOT] = "..",
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
  [sym_index] = "index",
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
  [anon_sym_index] = anon_sym_index,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
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
  [sym_index] = sym_index,
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
  [anon_sym_index] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [sym_index] = {
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
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(42);
      if (lookahead == '-') ADVANCE(44);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'x') ADVANCE(35);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') ADVANCE(32);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '@') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(29)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (eof) ADVANCE(31);
      if (lookahead == '+') ADVANCE(43);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '@') ADVANCE(48);
      if (lookahead == 'd') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(57);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(3);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(46);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(62);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(63);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_mode);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 30},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(10),
    [sym__line] = STATE(11),
    [sym_command] = STATE(11),
    [sym_index] = STATE(11),
    [sym_file] = STATE(11),
    [sym_location] = STATE(11),
    [sym_addition] = STATE(11),
    [sym_deletion] = STATE(11),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_diff] = ACTIONS(5),
    [anon_sym_index] = ACTIONS(7),
    [aux_sym_file_token1] = ACTIONS(9),
    [anon_sym_AT_AT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_context] = ACTIONS(17),
  },
  [2] = {
    [sym__line] = STATE(11),
    [sym_command] = STATE(11),
    [sym_index] = STATE(11),
    [sym_file] = STATE(11),
    [sym_location] = STATE(11),
    [sym_addition] = STATE(11),
    [sym_deletion] = STATE(11),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_diff] = ACTIONS(5),
    [anon_sym_index] = ACTIONS(7),
    [aux_sym_file_token1] = ACTIONS(9),
    [anon_sym_AT_AT] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(15),
    [sym_context] = ACTIONS(17),
  },
  [3] = {
    [sym__line] = STATE(11),
    [sym_command] = STATE(11),
    [sym_index] = STATE(11),
    [sym_file] = STATE(11),
    [sym_location] = STATE(11),
    [sym_addition] = STATE(11),
    [sym_deletion] = STATE(11),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_diff] = ACTIONS(23),
    [anon_sym_index] = ACTIONS(26),
    [aux_sym_file_token1] = ACTIONS(29),
    [anon_sym_AT_AT] = ACTIONS(32),
    [anon_sym_PLUS] = ACTIONS(35),
    [anon_sym_DASH] = ACTIONS(38),
    [sym_context] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(44), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_index,
      aux_sym_file_token1,
      anon_sym_AT_AT,
  [13] = 2,
    ACTIONS(46), 1,
      aux_sym_source_token1,
    ACTIONS(48), 1,
      aux_sym_location_token1,
  [20] = 2,
    ACTIONS(50), 1,
      aux_sym_location_token1,
    STATE(20), 1,
      sym_filename,
  [27] = 2,
    ACTIONS(50), 1,
      aux_sym_location_token1,
    STATE(14), 1,
      sym_filename,
  [34] = 2,
    ACTIONS(52), 1,
      aux_sym_source_token1,
    ACTIONS(54), 1,
      aux_sym_location_token1,
  [41] = 1,
    ACTIONS(56), 1,
      aux_sym_source_token1,
  [45] = 1,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
  [49] = 1,
    ACTIONS(60), 1,
      aux_sym_source_token1,
  [53] = 1,
    ACTIONS(62), 1,
      anon_sym_DOT_DOT,
  [57] = 1,
    ACTIONS(64), 1,
      aux_sym_source_token1,
  [61] = 1,
    ACTIONS(66), 1,
      aux_sym_source_token1,
  [65] = 1,
    ACTIONS(68), 1,
      sym_linerange,
  [69] = 1,
    ACTIONS(70), 1,
      sym_linerange,
  [73] = 1,
    ACTIONS(72), 1,
      aux_sym_source_token1,
  [77] = 1,
    ACTIONS(74), 1,
      anon_sym_DASH_DASHgit,
  [81] = 1,
    ACTIONS(76), 1,
      sym_commit,
  [85] = 1,
    ACTIONS(78), 1,
      aux_sym_source_token1,
  [89] = 1,
    ACTIONS(80), 1,
      sym_commit,
  [93] = 1,
    ACTIONS(82), 1,
      anon_sym_AT_AT2,
  [97] = 1,
    ACTIONS(84), 1,
      sym_mode,
  [101] = 1,
    ACTIONS(86), 1,
      aux_sym_location_token1,
  [105] = 1,
    ACTIONS(88), 1,
      aux_sym_source_token1,
  [109] = 1,
    ACTIONS(90), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 13,
  [SMALL_STATE(6)] = 20,
  [SMALL_STATE(7)] = 27,
  [SMALL_STATE(8)] = 34,
  [SMALL_STATE(9)] = 41,
  [SMALL_STATE(10)] = 45,
  [SMALL_STATE(11)] = 49,
  [SMALL_STATE(12)] = 53,
  [SMALL_STATE(13)] = 57,
  [SMALL_STATE(14)] = 61,
  [SMALL_STATE(15)] = 65,
  [SMALL_STATE(16)] = 69,
  [SMALL_STATE(17)] = 73,
  [SMALL_STATE(18)] = 77,
  [SMALL_STATE(19)] = 81,
  [SMALL_STATE(20)] = 85,
  [SMALL_STATE(21)] = 89,
  [SMALL_STATE(22)] = 93,
  [SMALL_STATE(23)] = 97,
  [SMALL_STATE(24)] = 101,
  [SMALL_STATE(25)] = 105,
  [SMALL_STATE(26)] = 109,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(8),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(11),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [58] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
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
