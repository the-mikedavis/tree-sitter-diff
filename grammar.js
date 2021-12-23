const NEWLINE = /\r?\n/;
const WHITE_SPACE = /[\t\f\v ]+/;
const ANYTHING = /[^\r\n]+/;

const COMMAND_PRELUDE = prec(30, token.immediate("diff"));
const INDEX_PRELUDE = prec(25, token.immediate("index"));
const FILE_PRELUDE = prec(
  20,
  token.immediate(field("kind", choice("---", "+++")))
);
const LOCATION_PRELUDE = prec(15, token.immediate("@@"));
const ADDITION_PRELUDE = prec(10, token.immediate("+"));
const DELETION_PRELUDE = prec(5, token.immediate("-"));

module.exports = grammar({
  name: "gitdiff",

  extras: ($) => [WHITE_SPACE],

  rules: {
    source: ($) => repeat(seq($._line, NEWLINE)),

    _line: ($) =>
      choice(
        $.command,
        $.index,
        $.file,
        $.location,
        $.addition,
        $.deletion,
        $.context
      ),

    command: ($) => seq(COMMAND_PRELUDE, "--git", $.filename),

    index: ($) => seq(INDEX_PRELUDE, $.commit, "..", $.commit, $.mode),

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
