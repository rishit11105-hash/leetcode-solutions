## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I keep track of the minimum stock price seen so far. For each price, I calculate the possible profit and update the maximum profit.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested a case where profit is possible and a case where prices continuously decrease.