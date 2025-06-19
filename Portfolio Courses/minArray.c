#include <stdio.h>
int main()
{
    int arr[] = {7,5,32,14,16,17,2,1,4,0,3,5,-1,5};
    int min = arr[0];

    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i<size; i++)
    {
        if(arr[i] < min)
        min = arr[i];
    }
    printf("Minimum Number : %d", min);
    return 0;
}