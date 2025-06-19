#include <stdio.h>
int main()
{
    int n, sum = 0, i;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter Number %d : ", i + 1);
        scanf("%d", &n);

        if (n > 0)
        {
            sum += n;
        }
        else
        {
            continue;
        }
    }
    printf("\n");
    printf("Sum of Positive Number : %d", sum);
    return 0;
}