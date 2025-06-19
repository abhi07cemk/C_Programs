#include <stdio.h>
int main()
{
    int bs, da,hra,ma,gs;
    printf("Enter Basic Salary : ");
    scanf("%d", &bs);
    da = (70*bs)/100;
    hra = (15*bs)/100;
    ma = (5*bs)/100;

    gs = bs + hra + da + ma;
    printf("Gross Salary : %d", gs);
    return 0;
}