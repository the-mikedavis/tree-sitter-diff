const NEWLINE = /\r?\n/;

module.exports = grammar({
  name: "gitdiff",

  extras: ($) => [],

  rules: {
    source: ($) => "hello",
  },
});
