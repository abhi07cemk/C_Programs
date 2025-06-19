#include <stdio.h>

int main()
{
    int k, arr[100];
    int target, found = 0;
    int i;
    printf("Enter No of elements : ");
    scanf("%d", &k);

    for(int j = 0; j<k; j++)
    {
        printf("Enter Element %d : ", j+1);
        scanf("%d", &arr[j]);
    }
    
    printf("Enter target element: ");
    scanf("%d", &target);
    
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = 1;
            printf("Element found at Index %d and Position %d\n", i, i + 1);
            break; // Stop after finding first match
        }
    }

    if (!found)
    {
        printf("Element Not Found\n");
    }

    return 0;
}
