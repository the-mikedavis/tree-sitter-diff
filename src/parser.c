#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 87
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 61
#define ALIAS_COUNT 1
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 4

enum {
  aux_sym_source_token1 = 1,
  anon_sym_diff = 2,
  aux_sym_command_token1 = 3,
  anon_sym_new = 4,
  anon_sym_deleted = 5,
  anon_sym_file = 6,
  anon_sym_mode = 7,
  anon_sym_old = 8,
  anon_sym_rename = 9,
  anon_sym_from = 10,
  anon_sym_to = 11,
  anon_sym_Binary = 12,
  anon_sym_files = 13,
  anon_sym_and = 14,
  anon_sym_differ = 15,
  anon_sym_index = 16,
  anon_sym_DOT_DOT = 17,
  anon_sym_similarity = 18,
  anon_sym_index2 = 19,
  aux_sym_similarity_token1 = 20,
  anon_sym_PERCENT = 21,
  anon_sym_DASH_DASH_DASH = 22,
  anon_sym_PLUS_PLUS_PLUS = 23,
  anon_sym_AT_AT = 24,
  anon_sym_AT_AT2 = 25,
  aux_sym_location_token1 = 26,
  anon_sym_PLUS = 27,
  anon_sym_PLUS_PLUS = 28,
  anon_sym_PLUS_PLUS_PLUS_PLUS = 29,
  anon_sym_DASH = 30,
  anon_sym_DASH_DASH = 31,
  anon_sym_DASH_DASH_DASH_DASH = 32,
  sym_context = 33,
  sym_linerange = 34,
  aux_sym_filename_token1 = 35,
  sym_commit = 36,
  sym_source = 37,
  sym__line = 38,
  sym_block = 39,
  sym_hunks = 40,
  sym_hunk = 41,
  sym_changes = 42,
  sym_command = 43,
  sym_file_change = 44,
  sym_binary_change = 45,
  sym_index = 46,
  sym_similarity = 47,
  sym_old_file = 48,
  sym_new_file = 49,
  sym_location = 50,
  sym_addition = 51,
  sym_deletion = 52,
  sym_filename = 53,
  sym_mode = 54,
  aux_sym_source_repeat1 = 55,
  aux_sym_block_repeat1 = 56,
  aux_sym_hunks_repeat1 = 57,
  aux_sym_changes_repeat1 = 58,
  aux_sym_changes_repeat2 = 59,
  aux_sym_filename_repeat1 = 60,
  alias_sym_score = 61,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_source_token1] = "source_token1",
  [anon_sym_diff] = "diff",
  [aux_sym_command_token1] = "argument",
  [anon_sym_new] = "new",
  [anon_sym_deleted] = "deleted",
  [anon_sym_file] = "file",
  [anon_sym_mode] = "mode",
  [anon_sym_old] = "old",
  [anon_sym_rename] = "rename",
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
  [sym_block] = "block",
  [sym_hunks] = "hunks",
  [sym_hunk] = "hunk",
  [sym_changes] = "changes",
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
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_hunks_repeat1] = "hunks_repeat1",
  [aux_sym_changes_repeat1] = "changes_repeat1",
  [aux_sym_changes_repeat2] = "changes_repeat2",
  [aux_sym_filename_repeat1] = "filename_repeat1",
  [alias_sym_score] = "score",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_source_token1] = aux_sym_source_token1,
  [anon_sym_diff] = anon_sym_diff,
  [aux_sym_command_token1] = aux_sym_command_token1,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_deleted] = anon_sym_deleted,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_mode] = anon_sym_mode,
  [anon_sym_old] = anon_sym_old,
  [anon_sym_rename] = anon_sym_rename,
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
  [sym_block] = sym_block,
  [sym_hunks] = sym_hunks,
  [sym_hunk] = sym_hunk,
  [sym_changes] = sym_changes,
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
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_hunks_repeat1] = aux_sym_hunks_repeat1,
  [aux_sym_changes_repeat1] = aux_sym_changes_repeat1,
  [aux_sym_changes_repeat2] = aux_sym_changes_repeat2,
  [aux_sym_filename_repeat1] = aux_sym_filename_repeat1,
  [alias_sym_score] = alias_sym_score,
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
  [aux_sym_command_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deleted] = {
    .visible = true,
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
  [anon_sym_old] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rename] = {
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
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_hunks] = {
    .visible = true,
    .named = true,
  },
  [sym_hunk] = {
    .visible = true,
    .named = true,
  },
  [sym_changes] = {
    .visible = true,
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
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hunks_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_changes_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_filename_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_score] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_changes = 1,
  field_location = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_changes] = "changes",
  [field_location] = "location",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_location, 0},
  [1] =
    {field_changes, 2},
    {field_location, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [2] = alias_sym_score,
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
  [27] = 24,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 23,
  [34] = 34,
  [35] = 24,
  [36] = 36,
  [37] = 23,
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
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '@') ADVANCE(5);
      if (lookahead == 'B') ADVANCE(38);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 's') ADVANCE(37);
      if (lookahead == 't') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(89);
      END_STATE();
    case 2:
      if (lookahead == '+') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(153);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(108);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(155);
      END_STATE();
    case 6:
      if (lookahead == '@') ADVANCE(156);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(216);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(103);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(216);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(28);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 32:
      if (lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(33)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'r') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(26);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(27);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(41);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 62:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 68:
      if (lookahead == 'w') ADVANCE(92);
      END_STATE();
    case 69:
      if (lookahead == 'x') ADVANCE(107);
      END_STATE();
    case 70:
      if (lookahead == 'x') ADVANCE(110);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(109);
      END_STATE();
    case 73:
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') SKIP(73)
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 82:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '%') ADVANCE(151);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'a') ADVANCE(54);
      if (lookahead == 'd') ADVANCE(19);
      if (lookahead == 'f') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == 'n') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(29);
      if (lookahead == 't') ADVANCE(59);
      if (('b' <= lookahead && lookahead <= 'e')) ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(82)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 83:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(159);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '@') ADVANCE(166);
      if (lookahead == 'B') ADVANCE(184);
      if (lookahead == 'd') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 's') ADVANCE(183);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 84:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '+') ADVANCE(2);
      if (lookahead == '-') ADVANCE(74);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 85:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '@') ADVANCE(6);
      if (lookahead == 'd') ADVANCE(42);
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(61);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 86:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(86)
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(215);
      if (lookahead != 0) ADVANCE(216);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_source_token1);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_diff);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_command_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_deleted);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == 's') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_mode);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_old);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_rename);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_to);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_Binary);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_files);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_differ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_differ);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_index);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_similarity);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_index2);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_similarity_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead == '-') ADVANCE(164);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(161);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_AT_AT);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_AT_AT2);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead == '\t' ||
          lookahead == 11 ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\n' || '\r' < lookahead)) ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_location_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      if (lookahead == '+') ADVANCE(154);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS_PLUS_PLUS);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      if (lookahead == '-') ADVANCE(152);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH_DASH);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '\n') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == 'd') ADVANCE(178);
      if (lookahead == 'n') ADVANCE(174);
      if (lookahead == 'o') ADVANCE(187);
      if (lookahead == 'r') ADVANCE(179);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0) ADVANCE(203);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == '@') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(195);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'd') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(199);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(200);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead == 'i') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'e') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'f') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'i') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'l') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'm') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(202);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 't') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'w') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'x') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_context);
      if (lookahead == 'y') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_context);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_linerange);
      if (lookahead == ',') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_linerange);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(212);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'f') ADVANCE(210);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'i') ADVANCE(211);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'n') ADVANCE(208);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead == 11 ||
          lookahead == '\f') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_filename_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(216);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_commit);
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
    case 243:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_commit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 83},
  [2] = {.lex_state = 83},
  [3] = {.lex_state = 83},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 83},
  [6] = {.lex_state = 83},
  [7] = {.lex_state = 83},
  [8] = {.lex_state = 83},
  [9] = {.lex_state = 83},
  [10] = {.lex_state = 83},
  [11] = {.lex_state = 83},
  [12] = {.lex_state = 83},
  [13] = {.lex_state = 83},
  [14] = {.lex_state = 83},
  [15] = {.lex_state = 83},
  [16] = {.lex_state = 83},
  [17] = {.lex_state = 83},
  [18] = {.lex_state = 83},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 83},
  [22] = {.lex_state = 83},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 86},
  [25] = {.lex_state = 84},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 86},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 86},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 86},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 86},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 86},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 86},
  [39] = {.lex_state = 84},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 84},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 84},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 84},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 84},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 84},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 84},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 84},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 73},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 84},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 84},
  [80] = {.lex_state = 84},
  [81] = {.lex_state = 33},
  [82] = {.lex_state = 33},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 84},
  [86] = {.lex_state = 33},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_token1] = ACTIONS(1),
    [anon_sym_diff] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_deleted] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_mode] = ACTIONS(1),
    [anon_sym_old] = ACTIONS(1),
    [anon_sym_rename] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_Binary] = ACTIONS(1),
    [anon_sym_files] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
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
    [sym_source] = STATE(78),
    [sym__line] = STATE(44),
    [sym_block] = STATE(2),
    [sym_command] = STATE(73),
    [sym_file_change] = STATE(44),
    [sym_binary_change] = STATE(44),
    [sym_index] = STATE(44),
    [sym_similarity] = STATE(44),
    [sym_old_file] = STATE(44),
    [sym_new_file] = STATE(44),
    [sym_location] = STATE(44),
    [sym_addition] = STATE(44),
    [sym_deletion] = STATE(44),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_token1] = ACTIONS(5),
    [anon_sym_diff] = ACTIONS(7),
    [anon_sym_new] = ACTIONS(9),
    [anon_sym_deleted] = ACTIONS(11),
    [anon_sym_old] = ACTIONS(13),
    [anon_sym_rename] = ACTIONS(15),
    [anon_sym_Binary] = ACTIONS(17),
    [anon_sym_index] = ACTIONS(19),
    [anon_sym_similarity] = ACTIONS(21),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_AT_AT] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(35),
    [sym_context] = ACTIONS(37),
  },
  [2] = {
    [sym__line] = STATE(54),
    [sym_block] = STATE(3),
    [sym_command] = STATE(73),
    [sym_file_change] = STATE(54),
    [sym_binary_change] = STATE(54),
    [sym_index] = STATE(54),
    [sym_similarity] = STATE(54),
    [sym_old_file] = STATE(54),
    [sym_new_file] = STATE(54),
    [sym_location] = STATE(54),
    [sym_addition] = STATE(54),
    [sym_deletion] = STATE(54),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_source_token1] = ACTIONS(41),
    [anon_sym_diff] = ACTIONS(7),
    [anon_sym_new] = ACTIONS(9),
    [anon_sym_deleted] = ACTIONS(11),
    [anon_sym_old] = ACTIONS(13),
    [anon_sym_rename] = ACTIONS(15),
    [anon_sym_Binary] = ACTIONS(17),
    [anon_sym_index] = ACTIONS(19),
    [anon_sym_similarity] = ACTIONS(21),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(23),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(25),
    [anon_sym_AT_AT] = ACTIONS(27),
    [anon_sym_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS] = ACTIONS(29),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(31),
    [anon_sym_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH] = ACTIONS(33),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(35),
    [sym_context] = ACTIONS(43),
  },
  [3] = {
    [sym__line] = STATE(65),
    [sym_block] = STATE(3),
    [sym_command] = STATE(73),
    [sym_file_change] = STATE(65),
    [sym_binary_change] = STATE(65),
    [sym_index] = STATE(65),
    [sym_similarity] = STATE(65),
    [sym_old_file] = STATE(65),
    [sym_new_file] = STATE(65),
    [sym_location] = STATE(65),
    [sym_addition] = STATE(65),
    [sym_deletion] = STATE(65),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(45),
    [aux_sym_source_token1] = ACTIONS(47),
    [anon_sym_diff] = ACTIONS(50),
    [anon_sym_new] = ACTIONS(53),
    [anon_sym_deleted] = ACTIONS(56),
    [anon_sym_old] = ACTIONS(59),
    [anon_sym_rename] = ACTIONS(62),
    [anon_sym_Binary] = ACTIONS(65),
    [anon_sym_index] = ACTIONS(68),
    [anon_sym_similarity] = ACTIONS(71),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(74),
    [anon_sym_PLUS_PLUS_PLUS] = ACTIONS(77),
    [anon_sym_AT_AT] = ACTIONS(80),
    [anon_sym_PLUS] = ACTIONS(83),
    [anon_sym_PLUS_PLUS] = ACTIONS(83),
    [anon_sym_PLUS_PLUS_PLUS_PLUS] = ACTIONS(86),
    [anon_sym_DASH] = ACTIONS(89),
    [anon_sym_DASH_DASH] = ACTIONS(89),
    [anon_sym_DASH_DASH_DASH_DASH] = ACTIONS(92),
    [sym_context] = ACTIONS(95),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      anon_sym_deleted,
    ACTIONS(13), 1,
      anon_sym_old,
    ACTIONS(15), 1,
      anon_sym_rename,
    ACTIONS(17), 1,
      anon_sym_Binary,
    ACTIONS(19), 1,
      anon_sym_index,
    ACTIONS(21), 1,
      anon_sym_similarity,
    ACTIONS(102), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(61), 1,
      sym_old_file,
    STATE(71), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(98), 5,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(100), 7,
      aux_sym_source_token1,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [53] = 13,
    ACTIONS(9), 1,
      anon_sym_new,
    ACTIONS(11), 1,
      anon_sym_deleted,
    ACTIONS(13), 1,
      anon_sym_old,
    ACTIONS(15), 1,
      anon_sym_rename,
    ACTIONS(17), 1,
      anon_sym_Binary,
    ACTIONS(19), 1,
      anon_sym_index,
    ACTIONS(21), 1,
      anon_sym_similarity,
    ACTIONS(102), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(4), 1,
      aux_sym_block_repeat1,
    STATE(66), 1,
      sym_old_file,
    STATE(71), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(104), 5,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(106), 7,
      aux_sym_source_token1,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [106] = 11,
    ACTIONS(112), 1,
      anon_sym_new,
    ACTIONS(115), 1,
      anon_sym_deleted,
    ACTIONS(118), 1,
      anon_sym_old,
    ACTIONS(121), 1,
      anon_sym_rename,
    ACTIONS(124), 1,
      anon_sym_Binary,
    ACTIONS(127), 1,
      anon_sym_index,
    ACTIONS(130), 1,
      anon_sym_similarity,
    STATE(6), 1,
      aux_sym_block_repeat1,
    STATE(71), 4,
      sym_file_change,
      sym_binary_change,
      sym_index,
      sym_similarity,
    ACTIONS(108), 5,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(110), 8,
      aux_sym_source_token1,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [154] = 12,
    ACTIONS(31), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(137), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(139), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(141), 1,
      sym_context,
    STATE(8), 1,
      aux_sym_changes_repeat2,
    STATE(14), 1,
      sym_changes,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(43), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(135), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(133), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
  [203] = 11,
    ACTIONS(31), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(35), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(137), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(139), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(141), 1,
      sym_context,
    STATE(9), 1,
      aux_sym_changes_repeat2,
    ACTIONS(29), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(33), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(43), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(145), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(143), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
  [249] = 11,
    ACTIONS(151), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(154), 1,
      anon_sym_PLUS_PLUS_PLUS,
    ACTIONS(160), 1,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
    ACTIONS(166), 1,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(169), 1,
      sym_context,
    STATE(9), 1,
      aux_sym_changes_repeat2,
    ACTIONS(157), 2,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
    ACTIONS(163), 2,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
    STATE(43), 2,
      sym_addition,
      sym_deletion,
    ACTIONS(149), 5,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
    ACTIONS(147), 6,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
  [295] = 5,
    ACTIONS(176), 1,
      anon_sym_AT_AT,
    STATE(69), 1,
      sym_location,
    STATE(10), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(174), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [329] = 5,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(69), 1,
      sym_location,
    STATE(10), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
    ACTIONS(179), 7,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(181), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [363] = 4,
    ACTIONS(183), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_changes_repeat1,
    ACTIONS(147), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(149), 11,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [393] = 4,
    ACTIONS(187), 1,
      aux_sym_source_token1,
    STATE(13), 1,
      aux_sym_changes_repeat1,
    ACTIONS(185), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(190), 11,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [423] = 2,
    ACTIONS(192), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(194), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [448] = 2,
    ACTIONS(196), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(198), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [473] = 2,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(200), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [498] = 2,
    ACTIONS(108), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(110), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [523] = 2,
    ACTIONS(202), 8,
      ts_builtin_sym_end,
      anon_sym_diff,
      anon_sym_Binary,
      anon_sym_index,
      anon_sym_similarity,
      anon_sym_AT_AT,
      anon_sym_PLUS_PLUS_PLUS_PLUS,
      anon_sym_DASH_DASH_DASH_DASH,
    ACTIONS(204), 12,
      aux_sym_source_token1,
      anon_sym_new,
      anon_sym_deleted,
      anon_sym_old,
      anon_sym_rename,
      anon_sym_DASH_DASH_DASH,
      anon_sym_PLUS_PLUS_PLUS,
      anon_sym_PLUS,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH,
      anon_sym_DASH_DASH,
      sym_context,
  [548] = 5,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      aux_sym_source_token1,
    ACTIONS(210), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(46), 1,
      sym_filename,
  [564] = 5,
    ACTIONS(210), 1,
      aux_sym_filename_token1,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      aux_sym_source_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(49), 1,
      sym_filename,
  [580] = 4,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(15), 1,
      sym_hunks,
    STATE(69), 1,
      sym_location,
    STATE(11), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [594] = 4,
    ACTIONS(27), 1,
      anon_sym_AT_AT,
    STATE(18), 1,
      sym_hunks,
    STATE(69), 1,
      sym_location,
    STATE(11), 2,
      sym_hunk,
      aux_sym_hunks_repeat1,
  [608] = 4,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
    ACTIONS(218), 1,
      aux_sym_source_token1,
    ACTIONS(220), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
  [621] = 4,
    ACTIONS(222), 1,
      ts_builtin_sym_end,
    ACTIONS(224), 1,
      aux_sym_source_token1,
    ACTIONS(226), 1,
      aux_sym_filename_token1,
    STATE(24), 1,
      aux_sym_filename_repeat1,
  [634] = 3,
    ACTIONS(231), 1,
      aux_sym_similarity_token1,
    STATE(52), 1,
      sym_mode,
    ACTIONS(229), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [645] = 3,
    ACTIONS(206), 1,
      ts_builtin_sym_end,
    ACTIONS(208), 1,
      aux_sym_source_token1,
    ACTIONS(233), 1,
      aux_sym_location_token1,
  [655] = 3,
    ACTIONS(224), 1,
      anon_sym_differ,
    ACTIONS(235), 1,
      aux_sym_filename_token1,
    STATE(27), 1,
      aux_sym_filename_repeat1,
  [665] = 3,
    ACTIONS(210), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(49), 1,
      sym_filename,
  [675] = 3,
    ACTIONS(212), 1,
      ts_builtin_sym_end,
    ACTIONS(214), 1,
      aux_sym_source_token1,
    ACTIONS(238), 1,
      aux_sym_location_token1,
  [685] = 3,
    ACTIONS(240), 1,
      aux_sym_filename_token1,
    STATE(33), 1,
      aux_sym_filename_repeat1,
    STATE(64), 1,
      sym_filename,
  [695] = 3,
    ACTIONS(242), 1,
      ts_builtin_sym_end,
    ACTIONS(244), 1,
      aux_sym_source_token1,
    ACTIONS(246), 1,
      aux_sym_location_token1,
  [705] = 3,
    ACTIONS(210), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(40), 1,
      sym_filename,
  [715] = 3,
    ACTIONS(218), 1,
      anon_sym_and,
    ACTIONS(248), 1,
      aux_sym_filename_token1,
    STATE(35), 1,
      aux_sym_filename_repeat1,
  [725] = 3,
    ACTIONS(210), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(72), 1,
      sym_filename,
  [735] = 3,
    ACTIONS(224), 1,
      anon_sym_and,
    ACTIONS(250), 1,
      aux_sym_filename_token1,
    STATE(35), 1,
      aux_sym_filename_repeat1,
  [745] = 3,
    ACTIONS(253), 1,
      aux_sym_filename_token1,
    STATE(37), 1,
      aux_sym_filename_repeat1,
    STATE(62), 1,
      sym_filename,
  [755] = 3,
    ACTIONS(218), 1,
      anon_sym_differ,
    ACTIONS(255), 1,
      aux_sym_filename_token1,
    STATE(27), 1,
      aux_sym_filename_repeat1,
  [765] = 3,
    ACTIONS(210), 1,
      aux_sym_filename_token1,
    STATE(23), 1,
      aux_sym_filename_repeat1,
    STATE(46), 1,
      sym_filename,
  [775] = 2,
    ACTIONS(257), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(67), 1,
      sym_new_file,
  [782] = 1,
    ACTIONS(259), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [787] = 2,
    ACTIONS(261), 1,
      anon_sym_file,
    ACTIONS(263), 1,
      anon_sym_mode,
  [794] = 1,
    ACTIONS(265), 2,
      anon_sym_from,
      anon_sym_to,
  [799] = 2,
    ACTIONS(267), 1,
      aux_sym_source_token1,
    STATE(12), 1,
      aux_sym_changes_repeat1,
  [806] = 2,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(269), 1,
      aux_sym_source_token1,
  [813] = 2,
    ACTIONS(231), 1,
      aux_sym_similarity_token1,
    STATE(40), 1,
      sym_mode,
  [820] = 1,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [825] = 1,
    ACTIONS(273), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [830] = 1,
    ACTIONS(275), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [835] = 1,
    ACTIONS(277), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [840] = 1,
    ACTIONS(279), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [845] = 2,
    ACTIONS(231), 1,
      aux_sym_similarity_token1,
    STATE(50), 1,
      sym_mode,
  [852] = 1,
    ACTIONS(281), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [857] = 1,
    ACTIONS(283), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [862] = 2,
    ACTIONS(269), 1,
      aux_sym_source_token1,
    ACTIONS(285), 1,
      ts_builtin_sym_end,
  [869] = 1,
    ACTIONS(287), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [874] = 2,
    ACTIONS(257), 1,
      anon_sym_PLUS_PLUS_PLUS,
    STATE(63), 1,
      sym_new_file,
  [881] = 1,
    ACTIONS(289), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [886] = 1,
    ACTIONS(291), 2,
      ts_builtin_sym_end,
      aux_sym_source_token1,
  [891] = 1,
    ACTIONS(293), 1,
      sym_linerange,
  [895] = 1,
    ACTIONS(295), 1,
      anon_sym_mode,
  [899] = 1,
    ACTIONS(297), 1,
      aux_sym_source_token1,
  [903] = 1,
    ACTIONS(299), 1,
      anon_sym_differ,
  [907] = 1,
    ACTIONS(301), 1,
      aux_sym_source_token1,
  [911] = 1,
    ACTIONS(303), 1,
      anon_sym_and,
  [915] = 1,
    ACTIONS(269), 1,
      aux_sym_source_token1,
  [919] = 1,
    ACTIONS(305), 1,
      aux_sym_source_token1,
  [923] = 1,
    ACTIONS(307), 1,
      aux_sym_source_token1,
  [927] = 1,
    ACTIONS(309), 1,
      aux_sym_similarity_token1,
  [931] = 1,
    ACTIONS(311), 1,
      aux_sym_source_token1,
  [935] = 1,
    ACTIONS(313), 1,
      anon_sym_DOT_DOT,
  [939] = 1,
    ACTIONS(315), 1,
      aux_sym_source_token1,
  [943] = 1,
    ACTIONS(317), 1,
      aux_sym_source_token1,
  [947] = 1,
    ACTIONS(319), 1,
      aux_sym_source_token1,
  [951] = 1,
    ACTIONS(321), 1,
      aux_sym_command_token1,
  [955] = 1,
    ACTIONS(206), 1,
      aux_sym_source_token1,
  [959] = 1,
    ACTIONS(212), 1,
      aux_sym_source_token1,
  [963] = 1,
    ACTIONS(323), 1,
      anon_sym_AT_AT2,
  [967] = 1,
    ACTIONS(325), 1,
      ts_builtin_sym_end,
  [971] = 1,
    ACTIONS(327), 1,
      sym_linerange,
  [975] = 1,
    ACTIONS(329), 1,
      anon_sym_index2,
  [979] = 1,
    ACTIONS(331), 1,
      sym_commit,
  [983] = 1,
    ACTIONS(333), 1,
      anon_sym_files,
  [987] = 1,
    ACTIONS(335), 1,
      anon_sym_PERCENT,
  [991] = 1,
    ACTIONS(263), 1,
      anon_sym_mode,
  [995] = 1,
    ACTIONS(261), 1,
      anon_sym_file,
  [999] = 1,
    ACTIONS(337), 1,
      sym_commit,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 106,
  [SMALL_STATE(7)] = 154,
  [SMALL_STATE(8)] = 203,
  [SMALL_STATE(9)] = 249,
  [SMALL_STATE(10)] = 295,
  [SMALL_STATE(11)] = 329,
  [SMALL_STATE(12)] = 363,
  [SMALL_STATE(13)] = 393,
  [SMALL_STATE(14)] = 423,
  [SMALL_STATE(15)] = 448,
  [SMALL_STATE(16)] = 473,
  [SMALL_STATE(17)] = 498,
  [SMALL_STATE(18)] = 523,
  [SMALL_STATE(19)] = 548,
  [SMALL_STATE(20)] = 564,
  [SMALL_STATE(21)] = 580,
  [SMALL_STATE(22)] = 594,
  [SMALL_STATE(23)] = 608,
  [SMALL_STATE(24)] = 621,
  [SMALL_STATE(25)] = 634,
  [SMALL_STATE(26)] = 645,
  [SMALL_STATE(27)] = 655,
  [SMALL_STATE(28)] = 665,
  [SMALL_STATE(29)] = 675,
  [SMALL_STATE(30)] = 685,
  [SMALL_STATE(31)] = 695,
  [SMALL_STATE(32)] = 705,
  [SMALL_STATE(33)] = 715,
  [SMALL_STATE(34)] = 725,
  [SMALL_STATE(35)] = 735,
  [SMALL_STATE(36)] = 745,
  [SMALL_STATE(37)] = 755,
  [SMALL_STATE(38)] = 765,
  [SMALL_STATE(39)] = 775,
  [SMALL_STATE(40)] = 782,
  [SMALL_STATE(41)] = 787,
  [SMALL_STATE(42)] = 794,
  [SMALL_STATE(43)] = 799,
  [SMALL_STATE(44)] = 806,
  [SMALL_STATE(45)] = 813,
  [SMALL_STATE(46)] = 820,
  [SMALL_STATE(47)] = 825,
  [SMALL_STATE(48)] = 830,
  [SMALL_STATE(49)] = 835,
  [SMALL_STATE(50)] = 840,
  [SMALL_STATE(51)] = 845,
  [SMALL_STATE(52)] = 852,
  [SMALL_STATE(53)] = 857,
  [SMALL_STATE(54)] = 862,
  [SMALL_STATE(55)] = 869,
  [SMALL_STATE(56)] = 874,
  [SMALL_STATE(57)] = 881,
  [SMALL_STATE(58)] = 886,
  [SMALL_STATE(59)] = 891,
  [SMALL_STATE(60)] = 895,
  [SMALL_STATE(61)] = 899,
  [SMALL_STATE(62)] = 903,
  [SMALL_STATE(63)] = 907,
  [SMALL_STATE(64)] = 911,
  [SMALL_STATE(65)] = 915,
  [SMALL_STATE(66)] = 919,
  [SMALL_STATE(67)] = 923,
  [SMALL_STATE(68)] = 927,
  [SMALL_STATE(69)] = 931,
  [SMALL_STATE(70)] = 935,
  [SMALL_STATE(71)] = 939,
  [SMALL_STATE(72)] = 943,
  [SMALL_STATE(73)] = 947,
  [SMALL_STATE(74)] = 951,
  [SMALL_STATE(75)] = 955,
  [SMALL_STATE(76)] = 959,
  [SMALL_STATE(77)] = 963,
  [SMALL_STATE(78)] = 967,
  [SMALL_STATE(79)] = 971,
  [SMALL_STATE(80)] = 975,
  [SMALL_STATE(81)] = 979,
  [SMALL_STATE(82)] = 983,
  [SMALL_STATE(83)] = 987,
  [SMALL_STATE(84)] = 991,
  [SMALL_STATE(85)] = 995,
  [SMALL_STATE(86)] = 999,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(74),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(41),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(85),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(84),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(42),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(82),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(81),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(80),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(20),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(79),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(29),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(29),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(26),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(26),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(65),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(41),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(85),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(42),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(82),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(80),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 2, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 2, .production_id = 2),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_changes, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_changes, 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(75),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(76),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(29),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(29),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(26),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(26),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat2, 2), SHIFT_REPEAT(43),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_hunks_repeat1, 2),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_hunks_repeat1, 2), SHIFT_REPEAT(79),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunks, 1),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunks, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_changes_repeat1, 2),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2), SHIFT_REPEAT(13),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_changes_repeat1, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_hunk, 3, .production_id = 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_hunk, 3, .production_id = 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 8),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 8),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 7),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 7),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 1),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_deletion, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 1),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_addition, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_filename, 1),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_filename, 1),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(24),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 4),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [235] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(27),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 4),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_location, 4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [250] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_filename_repeat1, 2), SHIFT_REPEAT(35),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 3),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_old_file, 2),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_change, 6),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mode, 1),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new_file, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_change, 4),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_similarity, 4, .production_id = 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 2),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_deletion, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_location, 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_addition, 2),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [325] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
