#include <stdio.h>

int LinearSearch(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 13, 23, 16, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter Number to Search: ");
    scanf("%d", &key);

    
    int result = LinearSearch(arr, key, size);

    if (result != -1)
    {
        printf("Number Found at Index: %d\n", result);
    }
    else
    {
        printf("Number Not Found\n");
    }

    return 0;
}
