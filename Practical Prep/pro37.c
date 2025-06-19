#include<stdio.h>
int main ()
{
    int a[5], i,n,elem,pos;
    printf("Enter Number of Elements : ");
    scanf("%d",&n);

    for(i = 0; i<n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d",&a[i]);
    }
    printf("\n Displaying Array Elements : ");
    for(i = 0; i<n; i++)
    {
        printf("\n a[%d] = %d", i, a[i]);
    }
    printf("\n Enter Element to insert :  ");
    scanf("%d",&elem);
    printf("\n Enter Position : ");
    scanf("%d", &pos);
    for(i = n; i>pos; i--)
    {
        a[i] = a[i-1];
    }
    a[pos] = elem;
    n++;
    printf("\n Modified Array : ");
    for(i = 0; i<n; i++)
    {
        printf("\n a[%d] = %d", i, a[i]);
    }
return 0;
}