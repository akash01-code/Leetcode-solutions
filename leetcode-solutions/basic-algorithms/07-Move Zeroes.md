## Problem: Move Zeroes (Easy–Medium)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

Used a two-pointer in-place swap: `insertPos` tracks the next slot that should hold a non-zero value. While scanning left to right, whenever a non-zero element is found, swapped it into `insertPos` and advanced that pointer. Zeroes naturally get pushed toward the end as a side effect of the swaps.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

Swapping (rather than just overwriting) matters here because it preserves the relative order of the non-zero elements while also correctly relocating the zero that was displaced. Edge case: an array containing a single zero should be returned unchanged, since there's nothing to move it past.