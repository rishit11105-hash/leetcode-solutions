## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used binary search on the sorted array. At every step, the middle element is compared with the target and half of the search space is eliminated.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The input array must be sorted for binary search to work correctly.