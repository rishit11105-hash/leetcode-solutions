#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;
    struct ListNode* current = head;

    while (current != NULL) {
        struct ListNode* nextNode = current->next;

        current->next = previous;

        previous = current;
        current = nextNode;
    }

    return previous;
}

void printList(struct ListNode* head) {
    while (head != NULL) {
        printf("%d ", head->val);
        head = head->next;
    }

    printf("\n");
}

int main() {
    // Test Case 1: 1 -> 2 -> 3
    struct ListNode node3 = {3, NULL};
    struct ListNode node2 = {2, &node3};
    struct ListNode node1 = {1, &node2};

    struct ListNode* result1 = reverseList(&node1);

    printf("Test 1: ");
    printList(result1);

    // Test Case 2: single node
    struct ListNode node4 = {5, NULL};

    struct ListNode* result2 = reverseList(&node4);

    printf("Test 2: ");
    printList(result2);

    return 0;
}