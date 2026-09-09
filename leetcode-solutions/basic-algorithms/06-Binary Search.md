## Problem: Binary Search (Easy–Medium)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

Used the standard iterative binary search: maintained a `left` and `right` boundary over the sorted array, checked the midpoint each iteration, and narrowed the search window to the half that could still contain the target.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Computed the midpoint as `left + (right - left) / 2` instead of `(left + right) / 2` to avoid integer overflow on very large arrays — a habit worth keeping even when it doesn't matter for small inputs. Edge case: searching for a value not present in the array should return -1 once the window closes (`left > right`).