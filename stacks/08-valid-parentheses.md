## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket is found, it is matched with the most recently added opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

I tested both correctly matched brackets and incorrectly matched brackets.