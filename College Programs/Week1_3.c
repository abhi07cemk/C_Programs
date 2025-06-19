// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int x, y, n, result;
//     printf("Enter Value of x : ");
//     scanf("%d", &x);
//     printf("Enter Value of y : ");
//     scanf("%d", &y);
//     printf("Enter Value of n : ");
//     scanf("%d", &n);
//     result = pow((3*x + 2*y), n);
//     printf("The Value of expression is : %d", result);

//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main()
{
    int x, y, n;
    double result; // Using double to store the result of pow()
    
    printf("Enter Value of x : ");
    scanf("%d", &x);
    
    printf("Enter Value of y : ");
    scanf("%d", &y);
    
    printf("Enter Value of n : ");
    scanf("%d", &n);
    
    result = pow((3 * x + 2 * y), n);  // Calculate the expression
    
    printf("The Value of expression is : %.0f\n", result);  // Printing result as integer
    
    return 0;
}
