#include<stdio.h>

int min(int arr[], int n)
{
    int minimum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    return minimum;
}

int main()
{
    int arr[10], n;

    printf("Enter Array Size : ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Minimum Element : %d", min(arr, n));

    return 0;
}

