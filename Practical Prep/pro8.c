#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a and b : ");
    scanf("%d %d", &a,&b);
    printf("Values of a and b : %d %d ", a,b);

    temp = a;
    a = b;
    b = temp;

    printf("\nAfter Swapping with 3rd variable : %d %d", a,b);

    a = a+b;
    b = a-b;
    a = a-b;

    printf("\nAfter Swapping without 3rd variable : %d %d", a,b);


    return 0;
}