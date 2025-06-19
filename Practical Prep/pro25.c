#include <stdio.h>
int main()
{
        int num,temp,rev=0,rem;
        printf("Enter A Number : ");
        scanf("%d",&num);

        temp = num;
        while(num > 0)
        {
            rem = num % 10;
            rev = rem + (rev * 10);
            num = num/10;
        }
        if(temp == rev)
        {
            printf("%d is Palindrome Number", temp);
        }
        else
        {
             printf("%d is not a Palindrome Number", temp);
        }

    printf("\n Reversed number is %d", rev);
    return 0;
}