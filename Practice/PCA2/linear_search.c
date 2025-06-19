#include <stdio.h>
int main()
{
    int arr[5], i,n, target, found = 0;
    printf("Enter Number of Elements : ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    
    }
    printf("\n Displaying the array elements : ");
    for(i = 0; i<n; i++)
    {
        printf("\n arr[%d] = %d ", i, arr[i]);
    }
    printf("\n Enter Searching Element : ");
    scanf("%d", &target);
    for(i = 0; i<n; i++)
    {
        if(arr[i] == target)
        {
            printf("Element %d found at position %d (index %d).\n", target, i + 1, i);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("Element Not Found ");
    }
    return 0;
}