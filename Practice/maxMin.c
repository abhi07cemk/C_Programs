#include<stdio.h>

int max(int arr[], int n)
{
    int maximum = arr[0];

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }

    return maximum;  // returning the maximum value
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

    printf("Maximum Element : %d", max(arr, n));

    return 0;
}

