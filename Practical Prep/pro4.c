#include <stdio.h>
int main()
{
    float c,f;
    printf("Enter Degree in Centigrade : ");
    scanf("%f", &c);
    f = (9*c/5)+32;
    printf("Fahrenheit temperature : %f", f);
    return 0;
}