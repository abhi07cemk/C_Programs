#include <stdio.h>

int main()
{
	char op;
	float a,b,result;
	printf("Enter Your Operation : [+, -, *, /, %]");
	scanf("%c", &op);
	printf("Enter 1st Integer : ");
	scanf("%f", &a);
	printf("Enter 2nd Integer : ");
	scanf("%f", &b);
	if(op == "+")
	{
		result = a+b;
		printf("Result : ", result);
	}
	else if(op == "-")
	{
		result = a-b;
		printf("Result : ", result);
	}
	else if(op == "*")
	{
		result = a*b;
		printf("Result : ", result);
	}
	else if(op == "/")
	{
		result = a/b;
		printf("Result : ", result);
	}
	else if(op == "%")
	{
		result = a%b;
		printf("Result : ", result);
	}
	else
	{
		printf("Invalid Operation ")
	}
}
