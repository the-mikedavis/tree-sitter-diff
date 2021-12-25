#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_DASH = 25,
  sym_context = 26,
  sym_linerange = 27,
  aux_sym_filename_token1 = 28,
  sym_commit = 29,
  sym_source = 30,
  sym__line = 31,
  sym_command = 32,
  sym_file_change = 33,
  sym_binary_change = 34,
  sym_index = 35,
  sym_similarity = 36,
  sym_old_file = 37,
  sym_new_file = 38,
  sym_location = 39,
  sym_addition = 40,
  sym_deletion = 41,
  sym_filename = 42,
  sym_mode = 43,
  aux_sym_source_repeat1 = 44,
  aux_sym_source_repeat2 = 45,
  aux_sym_filename_repeat1 = 46,
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
  [sym_old_file] = "old_file",
  [sym_new_file] = "new_file",
  [sym_location] = "location",
  [sym_addition] = "addition",
  [sym_deletion] = "deletion",
  [sym_filename] = "filename",
  [sym_mode] = "mode",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_source_repeat2] = "source_repeat2",
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
  [sym_old_file] = sym_old_file,
  [sym_new_file] = sym_new_file,
  [sym_location] = sym_location,
  [sym_addition] = sym_addition,
  [sym_deletion] = sym_deletion,
  [sym_filename] = sym_filename,
  [sym_mode] = sym_mode,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_source_repeat2] = aux_sym_source_repeat2,
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
  [aux_sym_source_repeat2] = {
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
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == '-') ADVANCE(176);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == 'B') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(30);
      if (lookahead == 's') ADVANCE(38);
      if (lookahead == 't') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(77);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == 'd') ADVANCE(45);
      if (lookahead == 'f') ADVANCE(46);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 't') ADVANCE(61);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(84);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(117);
      END_STATE();
    case 7:
      if (lookahead == '@') ADVANCE(130);
      END_STATE();
    case 8:
      if (lookahead == '@') ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(270);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(270);
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
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(101);
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
      if (lookahead == 'f') ADVANCE(94);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(35)
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'g') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(49);
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(50);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(22);
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
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(104);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(105);
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
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 66:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 71:
      if (lookahead == 'w') ADVANCE(98);
      END_STATE();
    case 72:
      if (lookahead == 'x') ADVANCE(114);
      END_STATE();
    case 73:
      if (lookahead == 'x') ADVANCE(121);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(118);
      END_STATE();
    case 76:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(76)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(270);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(304);
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
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(123);
      if (lookahead == '.') ADVANCE(6);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == 'a') ADVANCE(56);
      if (lookahead == 'd') ADVANCE(44);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(60);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 't') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 86:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(174);
      if (lookahead == '-') ADVANCE(178);
      if (lookahead == '@') ADVANCE(225);
      if (lookahead == 'B') ADVANCE(247);
      if (lookahead == 'd') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(255);
      if (lookahead == 'n') ADVANCE(235);
      if (lookahead == 'r') ADVANCE(240);
      if (lookahead == 's') ADVANCE(246);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(268);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 87:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(175);
      if (lookahead == '-') ADVANCE(179);
      if (lookahead == '@') ADVANCE(136);
      if (lookahead == 'B') ADVANCE(152);
      if (lookahead == 'd') ADVANCE(142);
      if (lookahead == 'i') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead == 's') ADVANCE(151);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 88:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(173);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '@') ADVANCE(185);
      if (lookahead == 'B') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 89:
      if (eof) ADVANCE(91);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(173);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '@') ADVANCE(185);
      if (lookahead == 'B') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(200);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 90:
      if (eof) ADVANCE(91);
      if (lookahead == '+') ADVANCE(173);
      if (lookahead == '-') ADVANCE(177);
      if (lookahead == '@') ADVANCE(185);
      if (lookahead == 'B') ADVANCE(201);
      if (lookahead == 'd') ADVANCE(192);
      if (lookahead == 'i') ADVANCE(208);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(200);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(220);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_diff);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH_DASHgit);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_file_change_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Binary);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Binary);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_index);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_similarity);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_similarity);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '+') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '@') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'a') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'a') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'd') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'd') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'e') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'i') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'i') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'i') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'l') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'l') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'm') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'm') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'n') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'r') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'r') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 't') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'w') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'x') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'y') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == 'y') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(170);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(2);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(223);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(184);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(224);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(171);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(268);
      if (lookahead != 0) ADVANCE(270);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(181);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(92);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '+') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '-') ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(207);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(216);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(213);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(220);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(220);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '+') ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '@') ADVANCE(131);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(254);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(258);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(238);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(233);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(251);
      if (lookahead == 'i') ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(263);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(242);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(245);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(241);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(252);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(244);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'l') ADVANCE(228);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'm') ADVANCE(248);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'm') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(226);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(231);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(249);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 't') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 't') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'w') ADVANCE(99);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'x') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'y') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'y') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(180);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(268);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(269);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_commit);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(284);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(285);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(286);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(288);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(289);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(303);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 88},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 90},
  [5] = {.lex_state = 90},
  [6] = {.lex_state = 86},
  [7] = {.lex_state = 89},
  [8] = {.lex_state = 86},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 88},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 88},
  [14] = {.lex_state = 88},
  [15] = {.lex_state = 88},
  [16] = {.lex_state = 88},
  [17] = {.lex_state = 88},
  [18] = {.lex_state = 88},
  [19] = {.lex_state = 88},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 88},
  [22] = {.lex_state = 88},
  [23] = {.lex_state = 88},
  [24] = {.lex_state = 88},
  [25] = {.lex_state = 88},
  [26] = {.lex_state = 90},
  [27] = {.lex_state = 76},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 76},
  [30] = {.lex_state = 76},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 76},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 76},
  [37] = {.lex_state = 76},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 35},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 3},
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
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(49),
    [sym__line] = STATE(16),
    [sym_command] = STATE(16),
    [sym_file_change] = STATE(16),
    [sym_binary_change] = STATE(16),
    [sym_index] = STATE(16),
    [sym_similarity] = STATE(16),
    [sym_old_file] = STATE(16),
    [sym_new_file] = STATE(16),
    [sym_location] = STATE(16),
    [sym_addition] = STATE(16),
    [sym_deletion] = STATE(16),
    [aux_sym_source_repeat1] = STATE(2),
    [aux_sym_source_repeat2] = STATE(5),
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
    [anon_sym_DASH] = ACTIONS(25),
    [sym_context] = ACTIONS(27),
  },
  [2] = {
    [sym__line] = STATE(16),
    [sym_command] = STATE(16),
    [sym_file_change] = STATE(16),
    [sym_binary_change] = STATE(16),
    [sym_index] = STATE(16),
    [sym_similarity] = STATE(16),
    [sym_old_file] = STATE(16),
    [sym_new_file] = STATE(16),
    [sym_location] = STATE(16),
    [sym_addition] = STATE(16),
    [sym_deletion] = STATE(16),
    [aux_sym_source_repeat1] = STATE(10),
    [aux_sym_source_repeat2] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_source_token1] = ACTIONS(31),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [sym_context] = ACTIONS(27),
  },
  [3] = {
    [sym__line] = STATE(16),
    [sym_command] = STATE(16),
    [sym_file_change] = STATE(16),
    [sym_binary_change] = STATE(16),
    [sym_index] = STATE(16),
    [sym_similarity] = STATE(16),
    [sym_old_file] = STATE(16),
    [sym_new_file] = STATE(16),
    [sym_location] = STATE(16),
    [sym_addition] = STATE(16),
    [sym_deletion] = STATE(16),
    [aux_sym_source_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_diff] = ACTIONS(35),
    [aux_sym_file_change_token1] = ACTIONS(38),
    [anon_sym_Binary] = ACTIONS(41),
    [anon_sym_index] = ACTIONS(44),
    [anon_sym_similarity] = ACTIONS(47),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(50),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(53),
    [anon_sym_AT_AT] = ACTIONS(56),
    [anon_sym_PLUS] = ACTIONS(59),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_context] = ACTIONS(65),
  },
  [4] = {
    [sym__line] = STATE(16),
    [sym_command] = STATE(16),
    [sym_file_change] = STATE(16),
    [sym_binary_change] = STATE(16),
    [sym_index] = STATE(16),
    [sym_similarity] = STATE(16),
    [sym_old_file] = STATE(16),
    [sym_new_file] = STATE(16),
    [sym_location] = STATE(16),
    [sym_addition] = STATE(16),
    [sym_deletion] = STATE(16),
    [aux_sym_source_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(68),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [sym_context] = ACTIONS(27),
  },
  [5] = {
    [sym__line] = STATE(16),
    [sym_command] = STATE(16),
    [sym_file_change] = STATE(16),
    [sym_binary_change] = STATE(16),
    [sym_index] = STATE(16),
    [sym_similarity] = STATE(16),
    [sym_old_file] = STATE(16),
    [sym_new_file] = STATE(16),
    [sym_location] = STATE(16),
    [sym_addition] = STATE(16),
    [sym_deletion] = STATE(16),
    [aux_sym_source_repeat2] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(29),
    [anon_sym_diff] = ACTIONS(7),
    [aux_sym_file_change_token1] = ACTIONS(9),
    [anon_sym_Binary] = ACTIONS(11),
    [anon_sym_index] = ACTIONS(13),
    [anon_sym_similarity] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(19),
    [anon_sym_AT_AT] = ACTIONS(21),
    [anon_sym_PLUS] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(25),
    [sym_context] = ACTIONS(27),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      aux_sym_filename_token1,
    STATE(8), 1,
      aux_sym_filename_repeat1,
    ACTIONS(72), 12,
      aux_sym_source_token1,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
  [24] = 4,
    ACTIONS(80), 1,
      aux_sym_similarity_token1,
    STATE(18), 1,
      sym_mode,
    ACTIONS(78), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(76), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [48] = 4,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 1,
      aux_sym_filename_token1,
    STATE(8), 1,
      aux_sym_filename_repeat1,
    ACTIONS(84), 12,
      aux_sym_source_token1,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
  [72] = 3,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      aux_sym_location_token1,
    ACTIONS(91), 12,
      aux_sym_source_token1,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
  [93] = 4,
    ACTIONS(97), 1,
      aux_sym_source_token1,
    STATE(10), 1,
      aux_sym_source_repeat1,
    ACTIONS(100), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(95), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [116] = 3,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      aux_sym_location_token1,
    ACTIONS(104), 12,
      aux_sym_source_token1,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
  [137] = 3,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      aux_sym_location_token1,
    ACTIONS(110), 12,
      aux_sym_source_token1,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
  [158] = 2,
    ACTIONS(116), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(114), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [176] = 2,
    ACTIONS(120), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(118), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [194] = 2,
    ACTIONS(124), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [212] = 3,
    ACTIONS(128), 1,
      aux_sym_source_token1,
    ACTIONS(130), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [232] = 2,
    ACTIONS(134), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(132), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [250] = 2,
    ACTIONS(138), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(136), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [268] = 2,
    ACTIONS(142), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(140), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [286] = 2,
    ACTIONS(146), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(144), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [304] = 2,
    ACTIONS(150), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(148), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [322] = 2,
    ACTIONS(154), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(152), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [340] = 2,
    ACTIONS(158), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(156), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [358] = 2,
    ACTIONS(162), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(160), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [376] = 2,
    ACTIONS(166), 4,
      aux_sym_source_token1,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(164), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [394] = 2,
    ACTIONS(168), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_context,
    ACTIONS(33), 9,
      ts_builtin_sym_end,
      anon_sym_diff,
      aux_sym_file_change_token1,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_AT_AT,
  [411] = 3,
    ACTIONS(170), 1,
      aux_sym_filename_token1,
    STATE(33), 1,
      aux_sym_filename_repeat1,
    STATE(50), 1,
      sym_filename,
  [421] = 3,
    ACTIONS(84), 1,
      anon_sym_differ,
    ACTIONS(172), 1,
      aux_sym_filename_token1,
    STATE(28), 1,
      aux_sym_filename_repeat1,
  [431] = 3,
    ACTIONS(175), 1,
      aux_sym_filename_token1,
    STATE(6), 1,
      aux_sym_filename_repeat1,
    STATE(24), 1,
      sym_filename,
  [441] = 3,
    ACTIONS(175), 1,
      aux_sym_filename_token1,
    STATE(6), 1,
      aux_sym_filename_repeat1,
    STATE(23), 1,
      sym_filename,
  [451] = 3,
    ACTIONS(72), 1,
      anon_sym_differ,
    ACTIONS(177), 1,
      aux_sym_filename_token1,
    STATE(28), 1,
      aux_sym_filename_repeat1,
  [461] = 3,
    ACTIONS(84), 1,
      anon_sym_and,
    ACTIONS(179), 1,
      aux_sym_filename_token1,
    STATE(32), 1,
      aux_sym_filename_repeat1,
  [471] = 3,
    ACTIONS(72), 1,
      anon_sym_and,
    ACTIONS(182), 1,
      aux_sym_filename_token1,
    STATE(32), 1,
      aux_sym_filename_repeat1,
  [481] = 3,
    ACTIONS(175), 1,
      aux_sym_filename_token1,
    STATE(6), 1,
      aux_sym_filename_repeat1,
    STATE(22), 1,
      sym_filename,
  [491] = 2,
    ACTIONS(184), 1,
      anon_sym_file,
    ACTIONS(186), 2,
      anon_sym_from,
      anon_sym_to,
  [499] = 3,
    ACTIONS(175), 1,
      aux_sym_filename_token1,
    STATE(6), 1,
      aux_sym_filename_repeat1,
    STATE(14), 1,
      sym_filename,
  [509] = 3,
    ACTIONS(188), 1,
      aux_sym_filename_token1,
    STATE(31), 1,
      aux_sym_filename_repeat1,
    STATE(46), 1,
      sym_filename,
  [519] = 2,
    ACTIONS(190), 1,
      aux_sym_similarity_token1,
    STATE(20), 1,
      sym_mode,
  [526] = 1,
    ACTIONS(192), 1,
      anon_sym_DOT_DOT,
  [530] = 1,
    ACTIONS(194), 1,
      sym_linerange,
  [534] = 1,
    ACTIONS(196), 1,
      anon_sym_DASH_DASHgit,
  [538] = 1,
    ACTIONS(198), 1,
      anon_sym_AT_AT2,
  [542] = 1,
    ACTIONS(200), 1,
      anon_sym_files,
  [546] = 1,
    ACTIONS(202), 1,
      sym_commit,
  [550] = 1,
    ACTIONS(204), 1,
      anon_sym_PERCENT,
  [554] = 1,
    ACTIONS(206), 1,
      anon_sym_differ,
  [558] = 1,
    ACTIONS(208), 1,
      anon_sym_mode,
  [562] = 1,
    ACTIONS(210), 1,
      sym_commit,
  [566] = 1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
  [570] = 1,
    ACTIONS(214), 1,
      anon_sym_and,
  [574] = 1,
    ACTIONS(216), 1,
      sym_linerange,
  [578] = 1,
    ACTIONS(218), 1,
      aux_sym_similarity_token1,
  [582] = 1,
    ACTIONS(220), 1,
      anon_sym_index2,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 24,
  [SMALL_STATE(8)] = 48,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 93,
  [SMALL_STATE(11)] = 116,
  [SMALL_STATE(12)] = 137,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 194,
  [SMALL_STATE(16)] = 212,
  [SMALL_STATE(17)] = 232,
  [SMALL_STATE(18)] = 250,
  [SMALL_STATE(19)] = 268,
  [SMALL_STATE(20)] = 286,
  [SMALL_STATE(21)] = 304,
  [SMALL_STATE(22)] = 322,
  [SMALL_STATE(23)] = 340,
  [SMALL_STATE(24)] = 358,
  [SMALL_STATE(25)] = 376,
  [SMALL_STATE(26)] = 394,
  [SMALL_STATE(27)] = 411,
  [SMALL_STATE(28)] = 421,
  [SMALL_STATE(29)] = 431,
  [SMALL_STATE(30)] = 441,
  [SMALL_STATE(31)] = 451,
  [SMALL_STATE(32)] = 461,
  [SMALL_STATE(33)] = 471,
  [SMALL_STATE(34)] = 481,
  [SMALL_STATE(35)] = 491,
  [SMALL_STATE(36)] = 499,
  [SMALL_STATE(37)] = 509,
  [SMALL_STATE(38)] = 519,
  [SMALL_STATE(39)] = 526,
  [SMALL_STATE(40)] = 530,
  [SMALL_STATE(41)] = 534,
  [SMALL_STATE(42)] = 538,
  [SMALL_STATE(43)] = 542,
  [SMALL_STATE(44)] = 546,
  [SMALL_STATE(45)] = 550,
  [SMALL_STATE(46)] = 554,
  [SMALL_STATE(47)] = 558,
  [SMALL_STATE(48)] = 562,
  [SMALL_STATE(49)] = 566,
  [SMALL_STATE(50)] = 570,
  [SMALL_STATE(51)] = 574,
  [SMALL_STATE(52)] = 578,
  [SMALL_STATE(53)] = 582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(41),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(35),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(43),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(44),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(53),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(30),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(29),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(51),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(12),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2), SHIFT_REPEAT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(8),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(10),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_change, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_change, 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat2, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 5),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 5),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_change, 4),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mode, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_old_file, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_new_file, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat2, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [172] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(28),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(32),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [212] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_git_diff(void) {
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
