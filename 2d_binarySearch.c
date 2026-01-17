#include <stdio.h>

int main()
{
    int rows, cols, key;

    printf("Enter Rows : ");
    scanf("%d", &rows);

    printf("Enter Columns : ");
    scanf("%d", &cols);

    int arr[rows][cols];

    printf("Enter elements (row-wise sorted):\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter Key Value to Search : ");
    scanf("%d", &key);

    int beg = 0;
    int end = rows * cols - 1;
    int found = 0;

    while(beg <= end)
    {
        int mid = (beg + end) / 2;
        int r = mid / cols;
        int c = mid % cols;

        if(arr[r][c] == key)
        {
            printf("Element found at row %d, column %d\n", r, c);
            found = 1;
            break;
        }
        else if(arr[r][c] < key)
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
        printf("Element not found\n");
    }

    return 0;
}
