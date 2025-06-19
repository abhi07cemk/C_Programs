#include <stdio.h>
int main()
{
    float c, f;
    printf("Enter The Value of Centigrade : ");
    scanf("%f", &c);
    f = (9 * c / 5) + 32;
    printf("\n Farenheit Temperature is : %f", f);
    return 0;
}