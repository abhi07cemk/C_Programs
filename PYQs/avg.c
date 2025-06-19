#include <stdio.h>
int main()
{
    int arr[] = {12,14,56,7,8,9};
    int sum = 0;
    float average;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++)
    {
        sum+= arr[i];
    }
    average = sum/n;
    printf("Sum of Array : %d ", sum);
    printf("Average : %.2f ",average);
    return 0;
}