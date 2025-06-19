#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, average;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of size n
    int arr[n];

    // Input elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of the elements
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the average
    average = sum / n;

    // Output the sum and average
    printf("Sum of elements: %.2f\n", sum);
    printf("Average of elements: %.2f\n", average);

    return 0;
}
