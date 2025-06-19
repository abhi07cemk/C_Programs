#include <stdio.h>
int main()
{
    int arr[10], found = 0, beg, end,mid, key;
    int n,i;

    printf("Enter No of Elements (max 10) : ");
    scanf("%d",&n);

    for(i = 0; i<n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\nArray element :\n ");
    for(i = 0; i<n; i++)
    {
        printf(" ");
        printf("Arr[%d] = %d\n", i, arr[i]);
    }
    printf("Enter Searching element : ");
    scanf("%d", &key);
    beg = 0;
    end = n-1;

    while(beg <=end)
    {
        mid = (beg+end)/2;
        if(arr[mid] == key)
        {
            printf("Element Found at Index %d and Position %d", mid, mid+1);
            found = 1;
            break;
        }
        else if(arr[mid] < key)
        {
            beg = mid +1;
        }
        else if(arr[mid] > key)
        {
            end = mid - 1;
        }
    }
    if(!found)
    {
        printf("Element not found !!");
    }

    return 0;
}