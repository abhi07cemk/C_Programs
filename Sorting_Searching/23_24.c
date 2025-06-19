#include<stdio.h>
int main ()
{
    int num;
    int factorial = 1;
    printf("Enter number : ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial
        for (int i = 1; i <= num; i++) {
            factorial *= i;
        }

        // Output the result
        printf("Factorial of %d is %d\n", num, factorial);
    }

    return 0;
}
