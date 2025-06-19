#include <stdio.h>

int main() {
    int rows, cols;
    
    // Taking input for 2D array size
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    
    int arr[rows][cols];
    
    // Taking input for array elements
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    // Finding the largest element
    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    
    // Display the largest element
    printf("Largest element in the array: %d\n", max);
    
    return 0;
}
