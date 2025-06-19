#include <stdio.h>
int fact(int n)
{
    if(n == 0)
        return 1;
    else    
        return n * fact(n-1);
}

int main()
{   
    int num;
    printf("Enter num : ");
    scanf("%d", &num);
    printf("Factorial is : %d ",fact(num));

 
    return 0;
}