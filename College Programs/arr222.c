#include<stdio.h>
#include <conio.h>
int main ()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,12,13,14};
    int sum = 0;
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            continue;
        }
        else
        {
            sum += arr[i];
        }
    }
    printf("Sum of Odd numbers : %d ", sum);
return 0;
}