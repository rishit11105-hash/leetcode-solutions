#include <stdio.h>

int binarySearch(int nums[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    // Test Case 1
    int nums1[] = {-1, 0, 3, 5, 9, 12};

    printf("Test 1: %d\n",
           binarySearch(nums1, 6, 9));

    // Test Case 2 - target not present
    printf("Test 2: %d\n",
           binarySearch(nums1, 6, 2));

    return 0;
}