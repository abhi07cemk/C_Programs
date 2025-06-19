#include<stdio.h>
int main ()
{ 
    int a = 5;
    int *ptr = &a;
    printf("The Adress of a is %u\n",&a);
    printf("The Adress of a is %u\n",ptr);
    ptr++;
    printf("The Adress of ptr is %u\n",&a);

return 0;
}