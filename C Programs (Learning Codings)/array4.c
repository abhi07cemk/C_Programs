#include<stdio.h>
int main ()
{
    int a[100],size,max;
    printf("Enter Array Size : ");
    scanf("%d", &size);
    for(int i = 0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(int i = 0; i<size; i++)
    {
       if(a[i]>max)
       {
        max = a[i];
       }
    }
    printf("Maximum Value of Array : %d", max);
return 0;
}