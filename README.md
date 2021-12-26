# `tree-sitter-git-diff`

[![CI](https://github.com/the-mikedavis/tree-sitter-git-diff/actions/workflows/ci.yml/badge.svg)](https://github.com/the-mikedavis/tree-sitter-git-diff/actions/workflows/ci.yml)

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for
`git diff`s.

### Status

Working, but needs more testing.

### Examples

Highlighting a `.diff` file:

<img src="assets/diff.png" width="500"/>

Injecting this grammar into [tree-sitter-git-commit](https://github.com/the-mikedavis/tree-sitter-git-commit) in a verbose commit (`git commit --verbose`):

<img src="assets/helix-commit-with-diff.png" width="500"/>

### Design

This grammar is designed to be line-based: each line is parsed as its own
top-level node in the `$.source`. It would probably be more useful to have
the grammar parse each diff section (starting with `diff --git`) as its own
subtree. As it is written now, though, the grammar can be injected into
tree-sitter-git-commit without using combined injections, which are less
supported among editors that use tree-sitter for highlighting. A future
revision of this parser may upend this design decision.
