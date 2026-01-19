#include <stdio.h>

// Recursive Binary Search function
int binarySearch(int arr[], int left, int right, int target) {
    // base case: element not found
    if (left > right)
        return -1;

    int mid = left + (right - left) / 2;

    // element found
    if (arr[mid] == target)
        return mid;

    // search in left half
    if (target < arr[mid])
        return binarySearch(arr, left, mid - 1, target);

    // search in right half
    return binarySearch(arr, mid + 1, right, target);
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
