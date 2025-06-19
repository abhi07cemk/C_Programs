#include<stdio.h>
int main ()
{
    int n1,n2,g,i;
    printf("Enter N1 and N2 : ");
    scanf("%d %d", &n1, &n2);
    for(i = 1; i<= n1 && i <= n2; i++)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            g = i;
        }
    }
    printf("GCD of %d and %d is %d", n1,n2,g);
return 0;
}