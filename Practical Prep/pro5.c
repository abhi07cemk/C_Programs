#include <stdio.h>
#include <math.h>
int main()
{
    int v,u,f,s;
    printf("Enter Initial Velocity, Accelaration, Displacement : ");
    scanf("%d %d %d", &u, &f, &s);
    v = sqrt(u*u + 2 * f * s);
    printf("The final velcotiy : %d", v);
    
    return 0;
}