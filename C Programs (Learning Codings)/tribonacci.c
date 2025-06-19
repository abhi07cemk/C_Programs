#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c=2,d;
    printf("Enter No of Terms : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        d = a + b + c;
        a = b;
        b = c;
        c = d;
    }
    return 0;
}