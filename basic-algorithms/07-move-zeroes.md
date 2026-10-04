## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I first move all non-zero elements to the beginning of the array while maintaining their relative order. After that, I fill the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested a normal array and an array containing only zeroes.