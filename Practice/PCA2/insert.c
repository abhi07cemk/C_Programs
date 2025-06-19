#include <stdio.h>
int main()
{
    int arr[5], i,n, pos,val;
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
    printf("Enter Position You Want to Insert a Element : ");
    scanf("%d", &pos);
    printf("Enter Value : ");
    scanf("%d", &val);
    for(i = n; i > pos; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[pos-1] = val;
    n++;
    printf("\n Modified Array : ");
    for(i = 0; i<n; i++)
    {
        printf("\n arr[%d] = %d ", i, arr[i]);
    }
}
