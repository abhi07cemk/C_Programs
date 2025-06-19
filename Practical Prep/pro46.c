#include <stdio.h>
int main()
{
    int i,j,k;
    int A[5][5], B[5][5],C[5][5];

    printf("Enter Element of Matrix A : \n");
    for(i = 0; i<2; i++)
    {
        for(j = 0; j<2; j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter Element of Matrix B : \n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("B[%d][%d] : ", i,j);
            scanf("%d", &B[i][j]);
        }
    }
     for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            C[i][j] = 0;
            for(k = 0; k<2; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResultant Matrix : \n");
     for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("%5d",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}