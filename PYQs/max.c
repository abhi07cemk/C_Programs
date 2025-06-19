#include<stdio.h>
void FindMaxMin(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for(int i = 0; i <= n; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
        
    }
}

int main ()
{
    int arr[] = {5,2,3,4};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int max, min;
    FindMaxMin(arr,n,&max,&min);

    printf("%d\n", max);
    printf("%d\n", min);

return 0;
}