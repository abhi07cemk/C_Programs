#include <stdio.h>

int main() {
    int n, sum = 0;
    
    // Taking input for array size
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking input for array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Calculate sum
    }
    
    // Display the sum
    printf("Sum of elements: %d\n", sum);
    
    return 0;
}
