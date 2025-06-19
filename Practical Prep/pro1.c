//Series Sum  = 1^2  + 2^2 + ...............
#include<stdio.h>
int main ()
{
    int n,sum = 0;
    printf("Enter Nth Term : ");
    scanf("%d",&n);

    for(int i = 1; i<=n; i++)
    {
        sum += i*i;
    }
    printf("Sum of Series : %d", sum);
return 0;
}