#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    printf("Numbers before Swapping s: %d  &  %d \n", a,b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("Numbers after Swapping  : %d  &  %d \n", a,b);
    
return 0;
}