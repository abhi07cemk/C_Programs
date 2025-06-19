#include <stdio.h>
#include <conio.h>
struct stu
{
    int n;
    char b;
    float a;

};

int main()
{
    struct stu s;
    printf("Maximum Size of Structure : %d ", sizeof(s));
    

    return 0;
}