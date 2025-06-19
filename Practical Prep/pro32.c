#include<stdio.h>
int fact(int);
int fact(int n)
{
    int f = 1,i;
    for(i=1; i<=n; i++)
    {
        f = f*i;
    }
    return (f);
}
int main ()
{
    int num;
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("Factorial of %d is %d", num,fact(num));
return 0;
}