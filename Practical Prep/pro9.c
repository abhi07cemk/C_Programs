#include <stdio.h>
#include<math.h>
int main()
{
    float p,r,t,amt,ci;
    printf("Enter principal amount, rate, time : ");
    scanf("%f %f %f", &p, &r,&t);
    amt = p * pow((1+r/100),t);
    ci = amt - p;

    printf("Compund intrest : %f", ci);

    return 0;
}