#include <stdio.h>

int main()
{
    int i;
    int a[5];
    printf("Enter Array Elements: ");
    
    // Input elements for the array
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    
    // Printing the array in reverse
    printf("\nReverse Array: ");
    for (i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);  // Print the value, not the address
    }

    return 0;
}
