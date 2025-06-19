#include <stdio.h>
int main()
{
    int n, r, arm=0, c;
    printf("Enter A Number : ");
    scanf("%d", &n);
    c = n;

    while (n > 0)
    {
        r = n % 10;
        arm = (r * r * r) + arm;
        n = n / 10;
    }
    if (c == arm)
        printf("ArmStrong Number");
    else
        printf("Not A Armstrong number");

    return 0;
}