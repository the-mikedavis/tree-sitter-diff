const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "gitdiff",

  extras: ($) => [],

  rules: {
    source: ($) => repeat($._line),

    _line: ($) => choice(),
  },
});
