Problem: Valid Anagram (Easy)

Link: https://leetcode.com/problems/valid-anagram/

Approach

Used a fixed-size array of 26 counters (one per lowercase letter) as a lightweight frequency table. Incremented counts while scanning the first string and decremented while scanning the second; if every counter ends at zero, the strings are anagrams of each other.

Complexity
Time: O(n)
Space: O(1) (fixed 26-slot array, independent of input size)
Notes

Checking the lengths first is a cheap early exit — if they differ, the strings can't possibly be anagrams, so there's no point even touching the counters. This approach assumes lowercase English letters only; I'd need a bigger table (e.g., 128 for ASCII) to handle uppercase or Unicode input.