#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, res, option;

    do {
        printf("\n--- Simple Calculator ---\n");
        printf("Enter 1st Number: ");
        scanf("%d", &n1);
        printf("Enter 2nd Number: ");
        scanf("%d", &n2);

        printf("\nChoose an Option:\n");
        printf("1. ADD\n");
        printf("2. SUBTRACT\n");
        printf("3. MULTIPLY\n");
        printf("4. DIVIDE\n");
        printf("5. EXIT\n");
        printf("Enter Option (1-5): ");
        scanf("%d", &option);

        switch(option) {
            case 1:
                res = n1 + n2;
                printf("Result: %d + %d = %d\n", n1, n2, res);
                break;
            case 2:
                res = n1 - n2;
                printf("Result: %d - %d = %d\n", n1, n2, res);
                break;
            case 3:
                res = n1 * n2;
                printf("Result: %d * %d = %d\n", n1, n2, res);
                break;
            case 4:
                if(n2 == 0)
                    printf("Error: Division by zero is not allowed.\n");
                else {
                    float div = (float)n1 / n2;
                    printf("Result: %d / %d = %.2f\n", n1, n2, div);
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid Option! Please try again.\n");
        }
    } while(1);  // Infinite loop until option 5 is chosen

    return 0;
}
