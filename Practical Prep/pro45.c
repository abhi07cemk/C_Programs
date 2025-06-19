#include <stdio.h>
int main()
{
    int i,j,k;
    int A[5][5], B[5][5],C[5][5];

    printf("Enter Element of Matrix A : \n");
    for(i = 0; i<3; i++)
    {
        for(j = 0; j<3; j++)
        {
            printf("A[%d][%d] : ", i,j);
            scanf("%d", &A[i][j]);
        }
    }
    printf("\n Enter Element of Matrix B : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("B[%d][%d] : ", i,j);
            scanf("%d", &B[i][j]);
        }
    }
    printf("\nAdding the matrices : \n");
     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    printf("\nResultant Matrix : \n");
     for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",C[i][j]);
        }
        printf(" \n ");
    }
    return 0;
}