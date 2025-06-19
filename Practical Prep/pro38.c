#include <stdio.h>
int main()
{
    int a[5], i, n,pos;
    printf("Enter Number of Elements : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n Displaying Array Elements : ");
    for (i = 0; i < n; i++)
    {
        printf("\n a[%d] = %d", i, a[i]);
    }
    printf("\n Enter Position : ");
    scanf("%d", &pos);
    for(i = pos-1; i<n; i++)
    {
        a[i] = a[i+1];
    }
     printf("\n Modified Array : ");
    for(i = 0; i<n-1; i++)
    {
        printf("\n a[%d] = %d", i, a[i]);
    }
    return 0;
}