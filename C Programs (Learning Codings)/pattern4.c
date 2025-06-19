#include<stdio.h>
int main ()
{
    int count = 1;

    // for(int i = 1; i<=5; i++)
    // {
    //     for(int j = 1; j<=i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }

    // for(int i = 1; i<=5; i++)
    // {
    //     for(int j = 1; j<=i; j++)
    //     {
    //         printf("%d", j);
    //     }
    //     printf("\n");
    // }

    for(int i = 1; i<=3; i++)
    {
        for(int j = 1; j<=i; j++)
        {
            printf("%d", count);
            count++;
        }
        printf("\n");
    }
return 0;
}