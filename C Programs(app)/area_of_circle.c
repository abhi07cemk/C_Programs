#include <stdio.h>
int main()
{
    float r, a;
    float PI = 3.14;
    printf("Enter Radius : \n");
    scanf("%f", &r);
    a = PI * r * r;
    printf("Area : %.2f", a);

    return 0;
}