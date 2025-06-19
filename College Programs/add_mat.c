#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], sum[10][10];
    int i,j,m,n;

    printf("Enter Numbers of Rows and Columns : ");
    scanf("%d %d", &m,&n);

    printf("Enter Elements of Matrix A : ");
    for( i = 0; i<m; i++)
    {
        for(j = 0; j<n; j++)
        {
            printf("A[%d][%d] = ", i,j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter Elements of Matrix B : ");
    for( i = 0; i<m; i++)
    {
        for(j = 0; j<n; j++)
        {
            printf("B[%d][%d] = ", i,j);
            scanf("%d", &b[i][j]);
        }
    }
     for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nSum of Matrix A and B:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}