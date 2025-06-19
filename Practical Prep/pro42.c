#include <stdio.h>
int main()
{
    int n, i, j, k;

    printf("Enter the Size of Square Matrix: ");
    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n];

    // Input for Matrix A
    printf("Enter Elements of Matrix A:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }

    // Input for Matrix B
    printf("Enter Elements of Matrix B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &B[i][j]);
        }

    // Matrix Multiplication Logic
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the result matrix
    printf("Multiplication of Matrix A and B:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
