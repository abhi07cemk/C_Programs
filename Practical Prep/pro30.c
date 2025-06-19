#include<stdio.h>
int add(int,int);

int add(int x, int y)
{
    int z;
    z = x+y;
    return z;
}
int main ()
{
    int a,b,c;
    a = 5;
    b = 6;
    c = add(a,b);
    printf("Addition : %d", c);

return 0;
}