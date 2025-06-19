#include<stdio.h>
int main ()
{
    int x,y,w,z;
    x = 8;
    y = 3;
    printf("%d", z = x-- + ++y);
    printf("\n");
    printf("%d", w = --x + y++);
return 0;
}

#include <stdio.h>

int main() {
    int x = 5;
    int result;

    // Pre-increment example
    result = ++x;  // Increment first, then use the value
    printf("Pre-increment: x = %d, result = %d\n", x, result);

    x = 5; // Reset x

    // Post-increment example
    result = x++;  // Use the value first, then increment
    printf("Post-increment: x = %d, result = %d\n", x, result);

    return 0;
}


// 1.Pre-Increment (++x)
// Definition: In pre-increment, the value of the variable is incremented first, and then the updated value is used in the expression.

// Behavior: The value is increased before it is used in an expression.

// 2. Post-Increment (x++)
// Definition: In post-increment, the value of the variable is used in the expression first, and then it is incremented.

// Behavior: The value is used before the increment happens.