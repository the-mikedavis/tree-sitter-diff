#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 49
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  aux_sym_file_token1 = 19,
  anon_sym_AT_AT = 20,
  anon_sym_AT_AT2 = 21,
  aux_sym_location_token1 = 22,
  anon_sym_PLUS = 23,
  anon_sym_DASH = 24,
  sym_context = 25,
  sym_linerange = 26,
  aux_sym_filename_token1 = 27,
  sym_commit = 28,
  sym_source = 29,
  sym__line = 30,
  sym_command = 31,
  sym_file_change = 32,
  sym_binary_change = 33,
  sym_index = 34,
  sym_similarity = 35,
  sym_file = 36,
  sym_location = 37,
  sym_addition = 38,
  sym_deletion = 39,
  sym_filename = 40,
  sym_mode = 41,
  aux_sym_source_repeat1 = 42,
  aux_sym_filename_repeat1 = 43,
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
  [aux_sym_file_token1] = "file_token1",
  [anon_sym_AT_AT] = "@@",
  [anon_sym_AT_AT2] = "@@",
  [aux_sym_location_token1] = "location_token1",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
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
  [sym_file] = "file",
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
  [aux_sym_file_token1] = aux_sym_file_token1,
  [anon_sym_AT_AT] = anon_sym_AT_AT,
  [anon_sym_AT_AT2] = anon_sym_AT_AT,
  [aux_sym_location_token1] = aux_sym_location_token1,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_file] = sym_file,
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '+') ADVANCE(154);
      if (lookahead == '-') ADVANCE(156);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'B') ADVANCE(40);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 't') ADVANCE(61);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 't') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(206);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(150);
      END_STATE();
    case 8:
      if (lookahead == '@') ADVANCE(151);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(10)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(207);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(100);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(207);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(48);
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(34)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(97);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 'r') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 72:
      if (lookahead == 'x') ADVANCE(104);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(98);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 85:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') ADVANCE(88);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(148);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 't') ADVANCE(61);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(84);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == '+') ADVANCE(155);
      if (lookahead == '-') ADVANCE(157);
      if (lookahead == '@') ADVANCE(158);
      if (lookahead == 'B') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(165);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 's') ADVANCE(173);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(194);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_file_token1);
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
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(76);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(192);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(193);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(194);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(204);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(203);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(207);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_commit);
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
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 86},
  [2] = {.lex_state = 86},
  [3] = {.lex_state = 86},
  [4] = {.lex_state = 86},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 15},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 34},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 34},
  [48] = {.lex_state = 34},
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
    [aux_sym_file_token1] = ACTIONS(1),
    [anon_sym_AT_AT] = ACTIONS(1),
    [anon_sym_AT_AT2] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_commit] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(40),
    [sym__line] = STATE(38),
    [sym_command] = STATE(38),
    [sym_file_change] = STATE(38),
    [sym_binary_change] = STATE(38),
    [sym_index] = STATE(38),
    [sym_similarity] = STATE(38),
    [sym_file] = STATE(38),
    [sym_location] = STATE(38),
    [sym_addition] = STATE(38),
    [sym_deletion] = STATE(38),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_diff] = ACTIONS(5),
    [aux_sym_file_change_token1] = ACTIONS(7),
    [anon_sym_Binary] = ACTIONS(9),
    [anon_sym_index] = ACTIONS(11),
    [anon_sym_similarity] = ACTIONS(13),
    [aux_sym_file_token1] = ACTIONS(15),
    [anon_sym_AT_AT] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [sym_context] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(5), 1,
      anon_sym_diff,
    ACTIONS(7), 1,
      aux_sym_file_change_token1,
    ACTIONS(9), 1,
      anon_sym_Binary,
    ACTIONS(11), 1,
      anon_sym_index,
    ACTIONS(13), 1,
      anon_sym_similarity,
    ACTIONS(15), 1,
      aux_sym_file_token1,
    ACTIONS(17), 1,
      anon_sym_AT_AT,
    ACTIONS(19), 1,
      anon_sym_PLUS,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      sym_context,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      aux_sym_source_repeat1,
    STATE(38), 10,
      sym__line,
      sym_command,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
      sym_file,
      sym_location,
      sym_addition,
      sym_deletion,
  [49] = 13,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_diff,
    ACTIONS(32), 1,
      aux_sym_file_change_token1,
    ACTIONS(35), 1,
      anon_sym_Binary,
    ACTIONS(38), 1,
      anon_sym_index,
    ACTIONS(41), 1,
      anon_sym_similarity,
    ACTIONS(44), 1,
      aux_sym_file_token1,
    ACTIONS(47), 1,
      anon_sym_AT_AT,
    ACTIONS(50), 1,
      anon_sym_PLUS,
    ACTIONS(53), 1,
      anon_sym_DASH,
    ACTIONS(56), 1,
      sym_context,
    STATE(3), 1,
      aux_sym_source_repeat1,
    STATE(38), 10,
      sym__line,
      sym_command,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
      sym_file,
      sym_location,
      sym_addition,
      sym_deletion,
  [98] = 2,
    ACTIONS(59), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(27), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      aux_sym_file_token1,
      anon_sym_AT_AT,
  [114] = 3,
    ACTIONS(61), 1,
      aux_sym_source_token1,
    ACTIONS(63), 1,
      aux_sym_filename_token1,
    STATE(5), 1,
      aux_sym_filename_repeat1,
  [124] = 3,
    ACTIONS(66), 1,
      anon_sym_and,
    ACTIONS(68), 1,
      aux_sym_filename_token1,
    STATE(12), 1,
      aux_sym_filename_repeat1,
  [134] = 3,
    ACTIONS(70), 1,
      aux_sym_filename_token1,
    STATE(17), 1,
      aux_sym_filename_repeat1,
    STATE(26), 1,
      sym_filename,
  [144] = 3,
    ACTIONS(72), 1,
      aux_sym_source_token1,
    ACTIONS(74), 1,
      aux_sym_similarity_token1,
    STATE(42), 1,
      sym_mode,
  [154] = 3,
    ACTIONS(76), 1,
      aux_sym_filename_token1,
    STATE(15), 1,
      aux_sym_filename_repeat1,
    STATE(41), 1,
      sym_filename,
  [164] = 3,
    ACTIONS(61), 1,
      anon_sym_differ,
    ACTIONS(78), 1,
      aux_sym_filename_token1,
    STATE(10), 1,
      aux_sym_filename_repeat1,
  [174] = 3,
    ACTIONS(70), 1,
      aux_sym_filename_token1,
    STATE(17), 1,
      aux_sym_filename_repeat1,
    STATE(27), 1,
      sym_filename,
  [184] = 3,
    ACTIONS(61), 1,
      anon_sym_and,
    ACTIONS(81), 1,
      aux_sym_filename_token1,
    STATE(12), 1,
      aux_sym_filename_repeat1,
  [194] = 3,
    ACTIONS(70), 1,
      aux_sym_filename_token1,
    STATE(17), 1,
      aux_sym_filename_repeat1,
    STATE(29), 1,
      sym_filename,
  [204] = 3,
    ACTIONS(84), 1,
      aux_sym_filename_token1,
    STATE(6), 1,
      aux_sym_filename_repeat1,
    STATE(30), 1,
      sym_filename,
  [214] = 3,
    ACTIONS(66), 1,
      anon_sym_differ,
    ACTIONS(86), 1,
      aux_sym_filename_token1,
    STATE(10), 1,
      aux_sym_filename_repeat1,
  [224] = 2,
    ACTIONS(88), 1,
      anon_sym_file,
    ACTIONS(90), 2,
      anon_sym_from,
      anon_sym_to,
  [232] = 3,
    ACTIONS(66), 1,
      aux_sym_source_token1,
    ACTIONS(92), 1,
      aux_sym_filename_token1,
    STATE(5), 1,
      aux_sym_filename_repeat1,
  [242] = 2,
    ACTIONS(94), 1,
      aux_sym_source_token1,
    ACTIONS(96), 1,
      aux_sym_location_token1,
  [249] = 2,
    ACTIONS(98), 1,
      aux_sym_source_token1,
    ACTIONS(100), 1,
      aux_sym_location_token1,
  [256] = 2,
    ACTIONS(102), 1,
      aux_sym_source_token1,
    ACTIONS(104), 1,
      aux_sym_location_token1,
  [263] = 2,
    ACTIONS(74), 1,
      aux_sym_similarity_token1,
    STATE(36), 1,
      sym_mode,
  [270] = 1,
    ACTIONS(106), 1,
      aux_sym_source_token1,
  [274] = 1,
    ACTIONS(108), 1,
      aux_sym_source_token1,
  [278] = 1,
    ACTIONS(110), 1,
      aux_sym_source_token1,
  [282] = 1,
    ACTIONS(112), 1,
      anon_sym_DASH_DASHgit,
  [286] = 1,
    ACTIONS(114), 1,
      aux_sym_source_token1,
  [290] = 1,
    ACTIONS(116), 1,
      aux_sym_source_token1,
  [294] = 1,
    ACTIONS(118), 1,
      aux_sym_similarity_token1,
  [298] = 1,
    ACTIONS(120), 1,
      aux_sym_source_token1,
  [302] = 1,
    ACTIONS(122), 1,
      anon_sym_and,
  [306] = 1,
    ACTIONS(124), 1,
      sym_commit,
  [310] = 1,
    ACTIONS(126), 1,
      anon_sym_PERCENT,
  [314] = 1,
    ACTIONS(128), 1,
      anon_sym_DOT_DOT,
  [318] = 1,
    ACTIONS(130), 1,
      anon_sym_AT_AT2,
  [322] = 1,
    ACTIONS(132), 1,
      sym_linerange,
  [326] = 1,
    ACTIONS(134), 1,
      aux_sym_source_token1,
  [330] = 1,
    ACTIONS(136), 1,
      anon_sym_mode,
  [334] = 1,
    ACTIONS(138), 1,
      aux_sym_source_token1,
  [338] = 1,
    ACTIONS(140), 1,
      aux_sym_source_token1,
  [342] = 1,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
  [346] = 1,
    ACTIONS(144), 1,
      anon_sym_differ,
  [350] = 1,
    ACTIONS(146), 1,
      aux_sym_source_token1,
  [354] = 1,
    ACTIONS(148), 1,
      aux_sym_source_token1,
  [358] = 1,
    ACTIONS(150), 1,
      aux_sym_source_token1,
  [362] = 1,
    ACTIONS(152), 1,
      sym_linerange,
  [366] = 1,
    ACTIONS(154), 1,
      anon_sym_index2,
  [370] = 1,
    ACTIONS(156), 1,
      sym_commit,
  [374] = 1,
    ACTIONS(158), 1,
      anon_sym_files,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 49,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 154,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 194,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 214,
  [SMALL_STATE(16)] = 224,
  [SMALL_STATE(17)] = 232,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 249,
  [SMALL_STATE(20)] = 256,
  [SMALL_STATE(21)] = 263,
  [SMALL_STATE(22)] = 270,
  [SMALL_STATE(23)] = 274,
  [SMALL_STATE(24)] = 278,
  [SMALL_STATE(25)] = 282,
  [SMALL_STATE(26)] = 286,
  [SMALL_STATE(27)] = 290,
  [SMALL_STATE(28)] = 294,
  [SMALL_STATE(29)] = 298,
  [SMALL_STATE(30)] = 302,
  [SMALL_STATE(31)] = 306,
  [SMALL_STATE(32)] = 310,
  [SMALL_STATE(33)] = 314,
  [SMALL_STATE(34)] = 318,
  [SMALL_STATE(35)] = 322,
  [SMALL_STATE(36)] = 326,
  [SMALL_STATE(37)] = 330,
  [SMALL_STATE(38)] = 334,
  [SMALL_STATE(39)] = 338,
  [SMALL_STATE(40)] = 342,
  [SMALL_STATE(41)] = 346,
  [SMALL_STATE(42)] = 350,
  [SMALL_STATE(43)] = 354,
  [SMALL_STATE(44)] = 358,
  [SMALL_STATE(45)] = 362,
  [SMALL_STATE(46)] = 366,
  [SMALL_STATE(47)] = 370,
  [SMALL_STATE(48)] = 374,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(25),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(16),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(47),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(46),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(45),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(38),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(5),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(10),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(12),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
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
