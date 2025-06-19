#include <stdio.h>
#include <math.h>  // Required for sqrt()

int main() {
    int a, b, c, D;
    float x1, x2;

    // Input values
    printf("Enter values of a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);  // Fixed scanf format string

    // Calculate Discriminant
    D = (b * b) - (4 * a * c);

    if (D >= 0) 
    {  // Real roots exist
        if (D > 0) 
        {
            x1 = (-b + sqrt(D)) / (2.0 * a);  // Corrected quadratic formula
            x2 = (-b - sqrt(D)) / (2.0 * a);
            printf("Two distinct real roots:\n x1 = %.2f, x2 = %.2f\n", x1, x2);
        } 
        else 
        {
            x1 = x2 = -b / (2.0 * a);  // Corrected when D == 0
            printf("One real root:\n x1 = x2 = %.2f\n", x1);
        }
    } 
    else 
    {  // Imaginary roots case
        float realPart = -b / (2.0 * a);
        float imagPart = sqrt(-D) / (2.0 * a);
        printf("Complex roots:\n x1 = %.2f + %.2fi\n x2 = %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return 0;
}
