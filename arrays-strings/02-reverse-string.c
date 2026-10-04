#include <stdio.h>
#include <string.h>

void reverseString(char s[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Test Case 1
    char str1[] = {'h', 'e', 'l', 'l', 'o'};
    reverseString(str1, 5);

    printf("Test 1: ");
    for (int i = 0; i < 5; i++)
        printf("%c ", str1[i]);
    printf("\n");

    // Test Case 2 - single character
    char str2[] = {'a'};
    reverseString(str2, 1);

    printf("Test 2: ");
    for (int i = 0; i < 1; i++)
        printf("%c ", str2[i]);
    printf("\n");

    return 0;
}