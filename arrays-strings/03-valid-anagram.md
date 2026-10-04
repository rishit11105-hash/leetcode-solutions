## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrence of each lowercase English letter. The two strings are anagrams if every character has the same frequency in both strings.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I checked both a valid anagram and two strings that are not anagrams.