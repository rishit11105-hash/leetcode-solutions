## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compare the characters of the first string with the corresponding characters of every other string. The comparison stops when a mismatch is found.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

I tested strings with a common prefix and strings with no common prefix.