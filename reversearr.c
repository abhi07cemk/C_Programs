#include<stdio.h>

void swap (int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void reverseArr(int arr[], int start, int end)
{
    while(start < end)
    {
        swap(arr, start, end);
        start++;
        end--;
    }
}
int main()
{
    int arr[12], n;
    printf("Enter Size : ");
    scanf("%d", &n);

    for(int i = 0; i<n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Non Reversed Array : ");

    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    reverseArr(arr, 0, n-1);
    printf("Reverse Array : ");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}