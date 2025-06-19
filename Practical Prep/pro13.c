#include<stdio.h>
int main ()
{
    int quotient, dividend, divisor, remainder;
    printf("Enter Dividend and Divisior : ");
    scanf("%d %d", &dividend, &divisor);

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    printf("Quotient = %d\n Remainder = %d\n", quotient,remainder);

return 0;
}