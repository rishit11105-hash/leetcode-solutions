## Problem: Reverse Linked List (Easy) - Bonus

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I used three pointers: previous, current, and next. The next pointer stores the remaining list while the current node is redirected to the previous node.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

I tested a linked list with multiple nodes and a single-node linked list.