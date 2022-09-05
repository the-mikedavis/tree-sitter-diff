const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[\t\f\v ]+/;
const ANYTHING = /[^\r\n]+/;

module.exports = grammar({
  name: "diff",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) =>
      seq(repeat(seq(optional($._line), NEWLINE)), optional($._line)),

    _line: ($) =>
      choice(
        $.command,
        $.file_change,
        $.binary_change,
        $.index,
        $.similarity,
        $.old_file,
        $.new_file,
        $.location,
        $.addition,
        $.deletion,
        $.context
      ),

    // FIXME: remove git assumption
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

    old_file: ($) => iseq("---", $.filename),
    new_file: ($) => iseq("+++", $.filename),

    location: ($) =>
      iseq("@@", $.linerange, $.linerange, "@@", optional(ANYTHING)),

    addition: ($) => iseq("+", optional(ANYTHING)),
    deletion: ($) =>
      choice(iseq("-", optional(ANYTHING)), iseq("--", optional(ANYTHING))),

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
