# `tree-sitter-git-diff`

[![CI](https://github.com/the-mikedavis/tree-sitter-git-diff/actions/workflows/ci.yml/badge.svg)](https://github.com/the-mikedavis/tree-sitter-git-diff/actions/workflows/ci.yml)

A [tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for `git diff`s.

### Status

Working, but needs more testing.

### Examples

Highlighting a `.diff` file:

<img src="assets/diff.png" width="500"/>

Injecting this grammar into [tree-sitter-git-commit](https://github.com/the-mikedavis/tree-sitter-git-commit) in a verbose commit (`git commit --verbose`):

<img src="assets/helix-commit-with-diff.png" width="500"/>
