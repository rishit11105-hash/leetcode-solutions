#include <stdio.h>
#include <string.h>

int isValid(char s[]) {
    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char current = s[i];

        if (current == '(' || current == '[' || current == '{') {
            stack[++top] = current;
        } 
        else {
            if (top == -1)
                return 0;

            char open = stack[top--];

            if ((current == ')' && open != '(') ||
                (current == ']' && open != '[') ||
                (current == '}' && open != '{')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    // Test Case 1
    printf("Test 1: %s\n",
           isValid("()[]{}") ? "true" : "false");

    // Test Case 2
    printf("Test 2: %s\n",
           isValid("(]") ? "true" : "false");

    return 0;
}