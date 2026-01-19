#include <stdio.h>

// Recursive Bubble Sort function
void bubbleSort(int arr[], int n) {
    // base case: if array size is 1 or 0, it's already sorted
    if (n <= 1)
        return;

    // one pass of bubble sort (largest element moves to end)
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            // swap
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }

    // recursive call for remaining array
    bubbleSort(arr, n - 1);
}

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
