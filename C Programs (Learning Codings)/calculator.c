#include<stdio.h>
int main ()
{
    int a,b,ch;
    printf("Enter User Choice : ");
    scanf("%d", &ch);
    printf("Enter 1st Number : ");
    scanf("%d", &a);
    printf("Enter 2nd Number : ");
    scanf("%d", &b);


    if(ch == 1)
    {
       int add = a+b;
       printf("Addition : %d", add);
    }
    else if(ch == 2)
    {
        int sub = a-b;
        printf("Subtraction : %d", sub);
    }
    else if(ch == 3)
    {
        int mul = a*b;
        printf("Multiplication : %d", mul);
    }
    else if(ch == 4)
    {
        int div = a/b;
        printf("Division : %d", div);
    }
    else if(ch == 5)
    {
        int mod = a%b;
        printf("Modulus : %d", mod);
    }
    else
    {
        printf("Invalid Choice!");
    }
return 0;
}