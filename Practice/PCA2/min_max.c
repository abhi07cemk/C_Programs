#include <stdio.h>
int main()
{
    int arr[5], i, n;

    printf("Enter No of Elements : ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n Displaying the array elements : ");
    for(i = 0; i<n; i++)
    {
        printf("\n arr[%d] = %d ", i, arr[i]);
    }
    int max = arr[0];
    int min = arr[0];

    for(i = 0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
     printf("\n Maximum Element : %d  ", max);
     printf("\n Minimum Element : %d  ", min);
    return 0;
}