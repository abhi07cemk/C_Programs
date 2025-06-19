#include <stdio.h>
int main()
{
     int n, i, j;

    printf("Enter the  Size of Square Matrix : ");
    scanf("%d", &n);
    int A[n][n], B[n][n], C[n][n];
   

    printf("Enter Element of Matrix A : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter Element of Matrix B : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("B[%d][%d] : ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
     for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("Sum of Matrix A and B : \n");
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