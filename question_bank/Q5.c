#include<stdio.h>
int main ()
{
    int n, sum = 0;

    printf("Enter A +ve integer : ");
    scanf("%d", &n);

    if(n<1)
    {
        printf("Enter number greater than 0");
        return 1;
    }
    for(int i =1; i<=n; i++)
    {
        if(i % 2 != 0)
        sum+=i;
    }
    printf("The Sum of Odd Number Upto %d is : %d  ", n,sum);;
return 0;
}