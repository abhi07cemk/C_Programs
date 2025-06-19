// odd even count from 1D  Array
#include<stdio.h>
int main ()
{
    int even_c = 0;
    int odd_c = 0;
    int arr[] = {2,4,5,6,8,9,11,23};

    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<=n; i++)
    {
        if(arr[i]%2 == 0)
        even_c++;
        else
        odd_c++;
    }
    printf("Odd Numbers : %d\n", odd_c);
    printf("Even Numbers :  %d", even_c);

return 0;
}