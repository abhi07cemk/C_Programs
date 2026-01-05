#include <stdio.h>

int main()
{
    int a = 4;
    int b = 6;

    printf("a & b : %d\n", (a & b));
    printf("a | b : %d\n", (a | b));
    printf("a ~ b : %d\n", (~a));
    printf("a ^ b : %d\n", (a ^ b));

    printf("%d\n", (17 >> 1));
    printf("%d\n", (17 >> 2));
    printf("%d\n", (19 << 1));
    printf("%d\n", (21 << 2));

    return 0;
}