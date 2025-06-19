#include<stdio.h>
int main ()
{
    int arr[10],n, key, mid,beg,end,found = 0;
    printf("Enter Number of Elements (max 10) :");
    scanf("%d", &n);
    for(int i = 0; i<n; i++)
    {
        printf("Enter Element %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter Searching Element : ");
    scanf("%d", &key);

    beg = 0;
    end = n-1;
    
    while(beg <=end)
    {
        mid = (beg + end)/2;

        if(arr[mid] == key)
        {
            printf("Element %d found at Index (%d) and Position (%d)",key, mid,mid+1);
            found = 1;
            break;
        }
        else if (arr[mid]<key)
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
         printf("Element not found ");
    }
return 0;
}