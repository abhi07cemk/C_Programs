#include <stdio.h>
int main()
{
    int arr[100],num;
    printf("Enter Number of Elements : ");
    scanf("%d", &num);

    for(int i = 0; i<num; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<num; i++)
    {
        printf("\nArray : %d ", arr[i]);
    }
    for(int i = 0; i<num; i++)
    {
        arr[i] = arr[i] + 1;
    }
    printf("\nModified Array : ");
    for(int i = 0; i<num; i++)
    {
        printf("arr[%d] = %d ", i,arr[i]);
    }

    return 0;
}