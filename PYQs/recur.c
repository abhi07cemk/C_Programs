
#include <stdio.h>
// int fact(int n) //facotrial
// {
//     if(n==0)
//     return 1;
//     else
//     return n * fact(n-1);
// }
// int nCr(int n, int r)
// {
//     if(r==0 || r==n)
//     return 1;
//     else
//     return nCr(n-1,r-1) + nCr(n-1,r);
// }
int gcd(int a, int b)
{
    if(b == 0)
    return a;
    else
    return gcd(b, a%b);
}
int main()
{
    int a,b;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("GCD  of %d and %d is %d", a,b,gcd(a,b));
}