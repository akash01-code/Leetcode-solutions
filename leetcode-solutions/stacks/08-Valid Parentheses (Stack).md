## Problem: Valid Parentheses (Easy–Medium)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

Used a stack (implemented as a plain char array with a `top` index in C). Pushed every opening bracket onto the stack. On every closing bracket, popped the top of the stack and checked whether it's the matching opening bracket — if the stack is empty (nothing to match) or the popped bracket doesn't match, the string is invalid. At the end, the string is valid only if the stack is completely empty (every opening bracket was matched).

### Complexity

- Time: O(n)
- Space: O(n) (worst case, all characters are opening brackets)

### Notes

Edge case: an empty string is trivially valid, since there are no unmatched brackets. A closing bracket with an empty stack (e.g., `"]"` alone) must be checked explicitly to avoid popping from an empty stack.