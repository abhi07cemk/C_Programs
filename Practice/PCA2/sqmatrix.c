#include <stdio.h>

int main() {
    int i, j, size;
    int mat1[10][10], mat2[10][10], sum[10][10];

    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &size);

    printf("Enter elements of Matrix 1:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("mat1[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);  // Fixed here
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("mat2[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);  // Fixed here
        }
    }

    // Calculate sum of matrices
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Display result
    printf("Sum of the two matrices:\n");
    for(i = 0; i < size; i++) {
        for(j = 0; j < size; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
