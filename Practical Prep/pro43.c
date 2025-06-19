#include <stdio.h>
int main()
{
    int start, end, isPrime = 0,i,j;
    printf("Enter Starting Point : ");
    scanf("%d",&start);
    printf("Enter Ending Point : ");
    scanf("%d",&end);

    for(i = start; i<=end; i++)
    {
        if(i<2)
        continue;

        isPrime  = 1;
        for(j = 2; j<i; j++ )
        {
            if(i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime == 1)
        {
            printf("%d ", i);
        }
    }
    return 0;
}