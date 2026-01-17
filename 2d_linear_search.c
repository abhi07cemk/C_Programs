#include <stdio.h>

int main()
{
    int rows, cols, key;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements:\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter key to search: ");
    scanf("%d", &key);

    int found = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(arr[i][j] == key)
            {
                printf("Element found at row %d, column %d\n", i, j);
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(!found)
    {
        printf("Element not found\n");
    }

    return 0;
}
