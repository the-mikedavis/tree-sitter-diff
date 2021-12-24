#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_source_token1 = 1,
  anon_sym_diff = 2,
  anon_sym_DASH_DASHgit = 3,
  aux_sym_file_change_token1 = 4,
  anon_sym_file = 5,
  anon_sym_mode = 6,
  anon_sym_index = 7,
  anon_sym_DOT_DOT = 8,
  aux_sym_file_token1 = 9,
  anon_sym_AT_AT = 10,
  anon_sym_AT_AT2 = 11,
  aux_sym_location_token1 = 12,
  anon_sym_PLUS = 13,
  anon_sym_DASH = 14,
  sym_context = 15,
  sym_linerange = 16,
  sym_commit = 17,
  sym_mode = 18,
  sym_source = 19,
  sym__line = 20,
  sym_command = 21,
  sym_file_change = 22,
  sym_index = 23,
  sym_file = 24,
  sym_location = 25,
  sym_addition = 26,
  sym_deletion = 27,
  sym_filename = 28,
  aux_sym_source_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_diff] = "diff",
  [anon_sym_DASH_DASHgit] = "--git",
  [aux_sym_file_change_token1] = "file_change_token1",
  [anon_sym_file] = "file",
  [anon_sym_mode] = "mode",
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
  [sym_file_change] = "file_change",
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
  [aux_sym_file_change_token1] = aux_sym_file_change_token1,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_mode] = anon_sym_mode,
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
  [sym_file_change] = sym_file_change,
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
  [sym_file_change] = {
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
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(58);
      if (lookahead == '-') ADVANCE(60);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '@') ADVANCE(9);
      if (lookahead == 'd') ADVANCE(14);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(28);
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '@') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(52);
      END_STATE();
    case 9:
      if (lookahead == '@') ADVANCE(54);
      END_STATE();
    case 10:
      if (lookahead == '@') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 33:
      if (lookahead == 'x') ADVANCE(51);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(38);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 42:
      if (eof) ADVANCE(44);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(34);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '@') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'm') ADVANCE(29);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(42)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(41);
      END_STATE();
    case 43:
      if (eof) ADVANCE(44);
      if (lookahead == '+') ADVANCE(59);
      if (lookahead == '-') ADVANCE(61);
      if (lookahead == '@') ADVANCE(64);
      if (lookahead == 'd') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(80);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_file_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(62);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '+') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_commit);
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
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_mode);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 43},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 43},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
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
    [anon_sym_index] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [aux_sym_file_token1] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_linerange] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(11),
    [sym__line] = STATE(12),
    [sym_command] = STATE(12),
    [sym_file_change] = STATE(12),
    [sym_index] = STATE(12),
    [sym_file] = STATE(12),
    [sym_location] = STATE(12),
    [sym_addition] = STATE(12),
    [sym_deletion] = STATE(12),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_diff] = ACTIONS(5),
    [aux_sym_file_change_token1] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(9),
    [aux_sym_file_token1] = ACTIONS(11),
    [anon_sym_AT_AT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_context] = ACTIONS(19),
  },
  [2] = {
    [sym__line] = STATE(12),
    [sym_command] = STATE(12),
    [sym_file_change] = STATE(12),
    [sym_index] = STATE(12),
    [sym_file] = STATE(12),
    [sym_location] = STATE(12),
    [sym_addition] = STATE(12),
    [sym_deletion] = STATE(12),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_diff] = ACTIONS(23),
    [aux_sym_file_change_token1] = ACTIONS(26),
    [anon_sym_index] = ACTIONS(29),
    [aux_sym_file_token1] = ACTIONS(32),
    [anon_sym_AT_AT] = ACTIONS(35),
    [anon_sym_PLUS] = ACTIONS(38),
    [anon_sym_DASH] = ACTIONS(41),
    [sym_context] = ACTIONS(44),
  },
  [3] = {
    [sym__line] = STATE(12),
    [sym_command] = STATE(12),
    [sym_file_change] = STATE(12),
    [sym_index] = STATE(12),
    [sym_file] = STATE(12),
    [sym_location] = STATE(12),
    [sym_addition] = STATE(12),
    [sym_deletion] = STATE(12),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_diff] = ACTIONS(5),
    [aux_sym_file_change_token1] = ACTIONS(7),
    [anon_sym_index] = ACTIONS(9),
    [aux_sym_file_token1] = ACTIONS(11),
    [anon_sym_AT_AT] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(15),
    [anon_sym_DASH] = ACTIONS(17),
    [sym_context] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(49), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(21), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_index,
      aux_sym_file_token1,
      anon_sym_AT_AT,
  [14] = 2,
    ACTIONS(51), 1,
      aux_sym_source_token1,
    ACTIONS(53), 1,
      aux_sym_location_token1,
  [21] = 2,
    ACTIONS(55), 1,
      aux_sym_location_token1,
    STATE(22), 1,
      sym_filename,
  [28] = 2,
    ACTIONS(55), 1,
      aux_sym_location_token1,
    STATE(16), 1,
      sym_filename,
  [35] = 2,
    ACTIONS(57), 1,
      aux_sym_source_token1,
    ACTIONS(59), 1,
      sym_mode,
  [42] = 2,
    ACTIONS(61), 1,
      aux_sym_source_token1,
    ACTIONS(63), 1,
      aux_sym_location_token1,
  [49] = 1,
    ACTIONS(65), 1,
      aux_sym_source_token1,
  [53] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [57] = 1,
    ACTIONS(69), 1,
      aux_sym_source_token1,
  [61] = 1,
    ACTIONS(71), 1,
      anon_sym_mode,
  [65] = 1,
    ACTIONS(73), 1,
      anon_sym_DOT_DOT,
  [69] = 1,
    ACTIONS(75), 1,
      aux_sym_source_token1,
  [73] = 1,
    ACTIONS(77), 1,
      aux_sym_source_token1,
  [77] = 1,
    ACTIONS(79), 1,
      sym_linerange,
  [81] = 1,
    ACTIONS(81), 1,
      sym_commit,
  [85] = 1,
    ACTIONS(83), 1,
      aux_sym_source_token1,
  [89] = 1,
    ACTIONS(85), 1,
      anon_sym_DASH_DASHgit,
  [93] = 1,
    ACTIONS(87), 1,
      anon_sym_file,
  [97] = 1,
    ACTIONS(89), 1,
      aux_sym_source_token1,
  [101] = 1,
    ACTIONS(91), 1,
      sym_mode,
  [105] = 1,
    ACTIONS(93), 1,
      sym_commit,
  [109] = 1,
    ACTIONS(95), 1,
      anon_sym_AT_AT2,
  [113] = 1,
    ACTIONS(97), 1,
      aux_sym_source_token1,
  [117] = 1,
    ACTIONS(99), 1,
      sym_linerange,
  [121] = 1,
    ACTIONS(101), 1,
      aux_sym_location_token1,
  [125] = 1,
    ACTIONS(103), 1,
      aux_sym_source_token1,
  [129] = 1,
    ACTIONS(105), 1,
      aux_sym_source_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 14,
  [SMALL_STATE(6)] = 21,
  [SMALL_STATE(7)] = 28,
  [SMALL_STATE(8)] = 35,
  [SMALL_STATE(9)] = 42,
  [SMALL_STATE(10)] = 49,
  [SMALL_STATE(11)] = 53,
  [SMALL_STATE(12)] = 57,
  [SMALL_STATE(13)] = 61,
  [SMALL_STATE(14)] = 65,
  [SMALL_STATE(15)] = 69,
  [SMALL_STATE(16)] = 73,
  [SMALL_STATE(17)] = 77,
  [SMALL_STATE(18)] = 81,
  [SMALL_STATE(19)] = 85,
  [SMALL_STATE(20)] = 89,
  [SMALL_STATE(21)] = 93,
  [SMALL_STATE(22)] = 97,
  [SMALL_STATE(23)] = 101,
  [SMALL_STATE(24)] = 105,
  [SMALL_STATE(25)] = 109,
  [SMALL_STATE(26)] = 113,
  [SMALL_STATE(27)] = 117,
  [SMALL_STATE(28)] = 121,
  [SMALL_STATE(29)] = 125,
  [SMALL_STATE(30)] = 129,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(18),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(27),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(5),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(12),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
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
