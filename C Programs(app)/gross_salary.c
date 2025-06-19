#include<stdio.h>
int main ()
{
    int gs,bs,da,ta;
    printf("Enter Basuc Salary : ");
    scanf("%d", &bs);
    da = (10*bs)/100;
    ta = (12*bs)/100;
    gs = bs+da+ta;
    printf("gross salary : %d", gs);
return 0;
}