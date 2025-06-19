#include<stdio.h>
int main ()
{
    int a[5], sum =0;

    printf("Enter Array Element: ");
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Sum of Array Elements : ");

    for(int i = 0; i<5; i++)
    {
        sum = sum+a[i];
    }
    printf("%d", sum);
return 0;
}