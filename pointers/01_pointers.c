#include <stdio.h>
int main()
{
    int i = 72;
    int* j = &i; // j is a pointer pointing to i 
    int k  = 67;

    printf("The adress of k is %p\n", &k);
    printf("The Adress of i is : %p\n", &i);
    printf("The Adress of i is : %p\n", j);

    printf("The Value at adress j is %d\n", *j);
    printf("The Value at adress j is %d\n", *(&i));
    return 0;
}