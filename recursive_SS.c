#include <stdio.h>

void sort(int arr[], int idx, int size) {
    // base case
    if (idx == size)
        return;

    int smallestIdx = idx; // take current index element as smallest

    for (int i = idx + 1; i < size; i++) {
        if (arr[smallestIdx] > arr[i]) // found smaller element
            smallestIdx = i;
    }

    // place smallest element found at idx
    int temp = arr[idx];
    arr[idx] = arr[smallestIdx];
    arr[smallestIdx] = temp;

    // recursive call for next index
    sort(arr, idx + 1, size);
}

int main() {
    int arr[] = {6, 2, 8, 4, 10};
    int size = 5;

    sort(arr, 0, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
