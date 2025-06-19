#include <stdio.h>
int main()
{
	char operator;
	double num1;
	double num2;
	double result;
	
	printf("\n Enter A Operator (+ - * /) : ");
	scanf("%c", &operator);
	
	printf("Enter 1st Number : ");
	scanf("%f", &num1);
	
	printf("Enter 2nd Number : ");
	scanf("%f", &num2);
	
	switch(operator)
	{
		case 1:
			result = num1 + num2;
			printf("Result : %f", result);
			break;
			
		case '-':
			result = num1 - num2;
			printf("Result : %f", result);
			break;
			
		case '*':
			result = num1 * num2;
			printf("Result : %f", result);
			break;
			
		case '/':
			result = num1 / num2;
			printf("Result : %f", result);
			break;
			
		default :
			printf("%C not valid", operator);
			
	}
	return 0;
}
