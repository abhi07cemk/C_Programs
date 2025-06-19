#include <stdio.h>

int main()
{
	int operator;
	int num1;
	int num2;
	int result;

	while (1)
	{
		printf("\nSimple Calculator\n");
		printf("1. Addition\n");
		printf("2. Subtraction\n");
		printf("3. Multiplication\n");
		printf("4. Division\n");
		printf("5. Modulus\n");
		printf("6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &operator);

		if (operator== 6)
		{ // Exit condition
			printf("Exiting...\n");
			break;
		}

		printf("Enter 1st Number: ");
		scanf("%d", &num1);

		printf("Enter 2nd Number: ");
		scanf("%d", &num2);

		switch (operator)
		{
		case 1:
			result = num1 + num2;
			printf("Addition Result: %d\n", result);
			break;

		case 2:
			result = num1 - num2;
			printf("Subtraction Result: %d\n", result);
			break;

		case 3:
			result = num1 * num2;
			printf("Multiplication Result: %d\n", result);
			break;

		case 4:
			if (num2 != 0)
			{
				result = num1 / num2;
				printf("Division Result: %d\n", result);
			}
			else
			{
				printf("Error: Division by zero is not allowed.\n");
			}
			break;

		case 5:
			result = num1 % num2;
			printf("Modulus Result: %d\n", result);
			break;

		default:
			printf("Invalid Operation\n");
			break;
		}
	}

	return 0;
}
