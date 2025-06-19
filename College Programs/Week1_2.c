#include <stdio.h>
#include <math.h>
int main()
{
    int v, u, f, s;
    printf("Enter Value of Initial Velocity : ");
    scanf("%d", &u);
    printf("Enter Value of Accelaration : ");
    scanf("%d", &f);
    printf("Enter Value of Displacement : ");
    scanf("%d", &s);
    v = sqrt(u * u + 2 * f * s);
    printf("The Final Velocity is : %d", v);

    return 0;
} 