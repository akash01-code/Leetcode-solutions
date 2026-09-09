## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

Used the two-pointer technique: one pointer starts at the beginning, one at the end, and they swap characters while moving toward each other. This reverses the string in place without needing a second buffer.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Edge case worth remembering: single-character (or empty) strings — the pointers never actually cross, so the loop body never runs and the string is returned unchanged, which is exactly the correct behavior.