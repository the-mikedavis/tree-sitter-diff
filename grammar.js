const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[\t\f\v ]+/;
const ANYTHING = /[^\r\n]+/;

module.exports = grammar({
  name: "gitdiff",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) => repeat(seq($._line, NEWLINE)),

    _line: ($) =>
      choice(
        $.command,
        $.file_change,
        $.binary_change,
        $.index,
        $.similarity,
        $.file,
        $.location,
        $.addition,
        $.deletion,
        $.context
      ),

    command: ($) => iseq("diff", "--git", $.filename),

    file_change: ($) =>
      iseq(
        field("kind", choice("new", "deleted", "rename")),
        choice(
          seq("file", "mode", $.mode),
          seq(choice("from", "to"), $.filename)
        )
      ),

    binary_change: ($) =>
      iseq("Binary", "files", $.filename, "and", $.filename, "differ"),

    index: ($) => iseq("index", $.commit, "..", $.commit, optional($.mode)),

    similarity: ($) => iseq("similarity", "index", field("score", /\d+/), "%"),

    file: ($) => iseq(field("kind", choice("---", "+++")), $.filename),

    location: ($) => iseq("@@", $.linerange, $.linerange, "@@", optional(ANYTHING)),

    addition: ($) => iseq("+", optional(ANYTHING)),

    deletion: ($) => iseq("-", optional(ANYTHING)),

    context: ($) => token(prec(-1, ANYTHING)),

    linerange: ($) => /[-\+]\d+(,\d+)?/,
    filename: ($) => repeat1(/\S+/),
    commit: ($) => /[a-f0-9]{7,40}/,
    mode: ($) => /\d+/,
  },
});

function iseq(start_token, ...tokens) {
  return seq(token.immediate(start_token), ...tokens);
}
