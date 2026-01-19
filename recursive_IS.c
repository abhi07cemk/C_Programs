#include <stdio.h>

void sort(int arr[], int idx, int size) {
    // base case
    if (idx == size)
        return;

    int curr = arr[idx];
    int j = idx - 1;

    while (j >= 0) {
        if (curr < arr[j]) {   // found greater value than curr, shift to right
            arr[j + 1] = arr[j];
            j--;
        } else {               // smaller element found
            break;
        }
    }

    arr[j + 1] = curr; // place curr element at correct place

    // recursive call for next index
    sort(arr, idx + 1, size);
}

int main() {
    int arr[] = {10, 1, 7, 6, 14, 9};
    int size = 6;

    sort(arr, 1, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
