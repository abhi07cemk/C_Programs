#include<stdio.h>

int sum(int, int);  //function prototype

int sum(int x, int y) // function definition
{
	printf("The Sum is : %d", x+y);
	return x+y;
}
int main()
{
/*	int a = 1;
	int b = 3;
	int c = sum(a,b);
	//printf("%d", c);*/
	
	sum(12,5); // function call
	sum(14,67);
	return 0;
}
