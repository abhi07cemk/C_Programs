#include <stdio.h>
int main()
{
    int num,temp,sum=0,rem;
    printf("Enter A Number : ");
    scanf("%d",&num);

    temp= num;
    while(num > 0)
    {
        rem = num%10;
        sum = sum + (rem*rem*rem);
        num = num/10;
    }
    if(temp == sum)
    {
        printf("%d is Armstrong Number", temp);
    }
    else
    {
        printf("%d is not a Armstrong Number", temp);
    }
    return 0;
}