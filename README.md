# `tree-sitter-diff`

[![CI][ci-badge]][ci-workflow]

A [tree-sitter][tree-sitter] grammar for [git unified `diff`s](https://git-scm.com/docs/git-diff#generate_patch_text_with_p)

Highlighting a `.diff` file:

<img src="assets/diff.png" width="500"/>

Injecting this grammar into [tree-sitter-git-commit][tree-sitter-git-commit]
in a verbose commit (`git commit --verbose`):

<img src="assets/helix-commit-with-diff.png" width="500"/>

## Known limitations

- [ ] **Combined diffs**: Merge diffs such as `diff --combined` or `diff --cc`, including comma-separated `index` lines and `@@@` hunks

  ```diff
  diff --combined file.c
  index abc1234,def5678..9876543
  --- a/file.c
  +++ b/file.c
  @@@ -1,1 -1,1 +1,1 @@@
  -old
   -old
  ++new
  ```

- [ ] **Copy headers**: Copy detection headers like `copy from` and `copy to`

  ```diff
  diff --git a/src.txt b/dst.txt
  copy from src.txt
  copy to dst.txt
  similarity index 100%
  index abc1234..def5678 100644
  ```

- [ ] **Dissimilarity index**: Rewrite headers like `dissimilarity index 90%`

  ```diff
  diff --git a/file.txt b/file.txt
  dissimilarity index 90%
  index abc1234..def5678 100644
  --- a/file.txt
  +++ b/file.txt
  @@ -1 +1 @@
  -old
  +new
  ```

[ci-badge]: https://github.com/the-mikedavis/tree-sitter-diff/actions/workflows/ci.yml/badge.svg
[ci-workflow]: https://github.com/the-mikedavis/tree-sitter-diff/actions/workflows/ci.yml
[tree-sitter]: https://tree-sitter.github.io/tree-sitter/
[tree-sitter-git-commit]: https://github.com/the-mikedavis/tree-sitter-git-commit
