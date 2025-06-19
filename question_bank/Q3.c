#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);

    printf("1st and 2nd Number are : %d %d \n", a, b);
    printf("Number Before Swapping : %d %d \n", a, b);

    temp = a;
    a = b;
    b = temp;
    printf("Number After Swapping : %d %d \n", a, b);

    printf("Number Before Swapping without using third variable : %d %d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Number After Swapping without using third variable : %d %d \n", a, b);

    return 0;
}