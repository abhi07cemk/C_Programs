//trace of a matrix

#include<stdio.h>
int main ()
{
    int matrix [10][10];
    int i,j,n, trace = 0;

    printf("Enter Size of Matrix : ");
    scanf("%d",&n);

    printf("Enter  Element : \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j< n; j++)
        {
            printf("Element [%d][%d]: ", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(i=0; i<n; i++)
    {
        trace += matrix[i][i];
    }

    printf("Trace = %d ", trace);
return 0;
}