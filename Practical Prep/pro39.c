#include<stdio.h>
int main ()
{
    int arr[5],i,n,key,found = 0;
    printf("Enter number of elements : ");
    scanf("%d",&n);

    for(int i = 0; i<n; i++)
    {
        printf("Enter Elements %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter Element to Found : ");
    scanf("%d",&key);
    for(i = 0; i<n; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at Index (%d) and Position (%d)", i,i+1);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("Element not found ");
    }
return 0;
}