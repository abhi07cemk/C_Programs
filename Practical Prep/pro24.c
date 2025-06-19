#include <stdio.h>
int main()
{
    int arr[10], i;

    printf("Enter 10 Numbers:\n");
    for(i = 0; i < 10; i++)  // Fix: loop till i < 10
    {
        scanf("%d", &arr[i]);
    }

    printf("Array Elements:\n");
    for(i = 0; i < 10; i++)  // Fix: start from i = 0
    {
        printf("Arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
