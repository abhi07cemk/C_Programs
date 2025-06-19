#include <stdio.h>
int main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d", &n);

    if(n%5==0)
    printf("Number is Divisible by 5");
    else
    printf("Number is not Divisible by 5");

    return 0;
}