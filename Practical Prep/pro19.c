#include<stdio.h>
int main ()
{
    printf("Number between 5 and 20 which are divisible by 4 but not by 6 are : ");
    for(int i = 5; i<=20; i++)
    {
        if(i%4 == 0 && i%6 != 0)
        {
            printf("%d\t ", i);
        }
    }
return 0;
}