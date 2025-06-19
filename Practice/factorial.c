#include <stdio.h>
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    n = f1(n);
    printf("%d", n);
    
}
f1(int x)
{
    int b;
    if(x == 1)
        return 1;
    else   
        b = x*f1(x-1);
        return b;
}