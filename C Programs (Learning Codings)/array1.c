#include<stdio.h>
int main ()
{
    int a[5];
    printf("Enter Array Elements : ");
    for(int i = 0; i<5; i++)
    {
        scanf("%d", &a[i]);
        
    }
    printf("\nArray Elements : ");
    for (int i = 0; i <5; i++)
    {
        printf(" %d", a[i]);
    }
    
return 0;
}