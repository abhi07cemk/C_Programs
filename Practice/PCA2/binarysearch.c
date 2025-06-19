#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int beg, end, mid, found = 0;

    printf("Enter number of elements (sorted in ascending order): ");
    scanf("%d", &n);

    printf("Enter %d sorted elements:\n", n);
    for(i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    beg = 0;
    end = n - 1;

    while(beg <= end) {
        mid = (beg + end) / 2;

        if(arr[mid] == key) {
            printf("Element %d found at position %d (index %d)\n", key, mid + 1, mid);
            found = 1;
            break;
        }
        else if(arr[mid] < key) {
            beg = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    if(!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
