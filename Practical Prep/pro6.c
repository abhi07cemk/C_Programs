#include <stdio.h>
#include <math.h>
int main()
{
    int x,y,n;
    double result;
    printf("Enter x and y : ");
    scanf("%d %d", &x,&y);
    printf("Enter value of power (n) : ");
    scanf("%d", &n);
    result = pow((3*x + 2*y), n);
    printf("The Value is : %.2f",result);

    return 0;
}