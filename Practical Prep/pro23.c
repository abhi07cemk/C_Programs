#include<stdio.h>
int main ()
{
    int n,i=1, sum = 0;
    printf("Enter nth term : ");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
        
    } while (i<=n);
    printf("Sum of natural number = %d",sum);
    
    return 0;
}