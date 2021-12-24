const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[\t\f\v ]+/;
const ANYTHING = /[^\r\n]+/;

const COMMAND_PRELUDE = token.immediate("diff");
const FILE_CHANGE_PRELUDE = token.immediate(
  field("kind", choice("new", "deleted", "rename"))
);
const INDEX_PRELUDE = token.immediate("index");
const SIMILARITY_PRELUDE = token.immediate("similarity");
const FILE_PRELUDE = token.immediate(field("kind", choice("---", "+++")));
const LOCATION_PRELUDE = token.immediate("@@");
const ADDITION_PRELUDE = token.immediate("+");
const DELETION_PRELUDE = token.immediate("-");

module.exports = grammar({
  name: "gitdiff",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) => repeat(seq($._line, NEWLINE)),

    _line: ($) =>
      choice(
        $.command,
        $.file_change,
        $.index,
        $.similarity,
        $.file,
        $.location,
        $.addition,
        $.deletion,
        $.context
      ),

    command: ($) => seq(COMMAND_PRELUDE, "--git", $.filename),

    file_change: ($) =>
      choice(
        seq(FILE_CHANGE_PRELUDE, "file", "mode", $.mode),
        seq(FILE_CHANGE_PRELUDE, choice("from", "to"), $.filename)
      ),

    index: ($) =>
      seq(INDEX_PRELUDE, $.commit, "..", $.commit, optional($.mode)),

    similarity: ($) =>
      seq(SIMILARITY_PRELUDE, "index", field("score", /\d+/), "%"),

    file: ($) => seq(FILE_PRELUDE, $.filename),

    location: ($) =>
      seq(LOCATION_PRELUDE, $.linerange, $.linerange, "@@", ANYTHING),

    addition: ($) => seq(ADDITION_PRELUDE, optional(ANYTHING)),

    deletion: ($) => seq(DELETION_PRELUDE, optional(ANYTHING)),

    context: ($) => token(prec(-1, ANYTHING)),

    linerange: ($) => /[-\+]\d+,\d+/,
    filename: ($) => ANYTHING,
    commit: ($) => /[a-f0-9]{7,40}/,
    mode: ($) => /\d+/,
  },
});
