## Problem: Longest Common Prefix (Easy–Medium)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

Took the first string in the array as the initial "candidate" prefix, then compared it character-by-character against every other string, shrinking the candidate down to the first point where a mismatch occurs. If the candidate ever shrinks to an empty string, stopped early since no common prefix is possible.

### Complexity

- Time: O(S), where S is the total number of characters across all strings (worst case compares every character once)
- Space: O(1) extra (aside from the output buffer)

### Notes

Edge case: an empty input array should return an empty prefix immediately. I'd try a different approach next time — vertical scanning column-by-column across all strings at once — since it can exit even earlier on average when a mismatch appears in an early character position.