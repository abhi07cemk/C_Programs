#include <stdio.h>
int add();
int add()
{
    int x,y,z;
    x = 6;
    y = 9;
    z = x+y;
    return z;
}
int main()
{
    printf("Addition : %d", add());

    return 0;
}