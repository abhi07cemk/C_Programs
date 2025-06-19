#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, res, option;

    do {
        printf("\nEnter n1 and n2: ");
        scanf("%d %d", &n1, &n2);

        printf("Enter Operation:\n");
        printf("1. ADD\n2. SUB\n3. MUL\n4. DIV\n5. EXIT\n");
        printf("Your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                res = n1 + n2;
                printf("Addition is: %d\n", res);
                break;
            case 2:
                res = n1 - n2;
                printf("Subtraction is: %d\n", res);
                break;
            case 3:
                res = n1 * n2;
                printf("Multiplication is: %d\n", res);
                break;
            case 4:
                if (n2 == 0) {
                    printf("Error: Division by zero is not allowed.\n");
                } else {
                    res = n1 / n2;
                    printf("Division is: %d\n", res);
                }
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }

    } while (option != 5);

    return 0;
}
