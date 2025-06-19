#include<stdio.h>
int main ()
{
    int n1, n2, i,j;
    printf("Enter starting No : ");
    scanf("%d", n1);
    printf("Enter Ending no : ");
    scanf("%d", n2);
    for(i = n1; i<=n2; i++)
    {
        for(j = 2; j<=i; j++)
        {
            if(i%j == 0)
            break;
        }
        if(i==j)
        printf("%d", j);
    }
return 0;
}
