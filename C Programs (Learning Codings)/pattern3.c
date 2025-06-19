#include<stdio.h>
int main ()
{
    // for(int i = 1; i<=5; i++)
    // {
    //     for(int j = 1; j<=5; j++)
    //     {
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

    for(int i = 1; i<=3; i++)
    {
        for(int j = 1; j<=3; j++)
        {
            if(i == 1 || i == 3 || j == 1 || j == 3)
            printf("*");
            else
            printf(" ");
        }
        printf("\n");
    }
return 0;
}