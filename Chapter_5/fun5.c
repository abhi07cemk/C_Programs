#include <stdio.h>

int factorial(int);

int factorial(int n){
	if(n == 1 ||  n == 0){
		return 1;
	}
	return factorial(n-1) * n;
}
int main()
{
	int a;
	printf("enter a no : ");
	scanf("%d", &a);
	printf("The Factorial of the number %d is %d", a, factorial(a));
	return 0;
}
