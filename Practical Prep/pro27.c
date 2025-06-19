#include <stdio.h>
int main()
{
    int num, temp, sum = 0, rem,fact,i;
    printf("Enter A Number : ");
    scanf("%d", &num);
    temp = num;
    while(num > 0)
    {
        rem = num%10;
        fact = 1;
        for(i = 1; i<=rem; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num/10;
    }
    if(temp == sum)
    {
        printf("%d is Peterson Number",temp);
    }
    else
    {
          printf("%d is not a Peterson Number",temp);   
    }
    return 0;
}