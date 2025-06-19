#include <stdio.h>

int main()
{
    int n, target, count = 0;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value to count: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == target)
            count++;
    }

    printf("The value %d occurred %d time(s).\n", target, count);

    return 0;
}
