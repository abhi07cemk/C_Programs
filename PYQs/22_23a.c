#include<stdio.h>
int main ()
{
    int matrix[8][8];

    printf("Enter Element in 5 x 5 matrix : ");
    for(int i = 0; i<5; i++)
    {
        for(int j = 0; j<5; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Main Diagonal elements :\n");
    for(int i = 0; i<5; i++)
    {
        printf("%d ", matrix[i][i]);
    }

    printf("\n");
return 0;
}