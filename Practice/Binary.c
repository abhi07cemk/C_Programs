#include<stdio.h>

int main()
{
    int arr[10], n, target;
    printf("Enter Array Size : ");
    scanf("%d", &n);

    printf("Enter elements in sorted order:\n");
    for(int i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Enter Element to Search : ");
    scanf("%d", &target);

    int beg = 0;
    int end = n - 1;
    int mid, found = 0;

    while(beg <= end)
    {
        mid = beg + (end - beg) / 2;

        if(arr[mid] == target)
        {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if(arr[mid] < target)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if(!found)
    {
        printf("Element not found!\n");
    }

    return 0;
}

