#include <stdio.h>
int main()
{
    int n;
    int arr[100];
    printf("Enter No of Elements you want : ");
    scanf("%d", &n);

    printf("Enter %d elements : ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];

    for(int i = 0; i<n; i++)
    {
        if(arr[i] > max)
        max = arr[i];
    }
    printf("Maximum Element : %d", max);
    return 0;
}