#include<stdio.h>
int main ()
{
    int arr[] = {2,1,3,5,6,7,9};
    int sum = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++)
    {
        if(arr[i] % 2 == 0)
        continue;
        else
        sum+= arr[i];

    }
    printf("Sum of odd Number : %d", sum);
return 0;
}