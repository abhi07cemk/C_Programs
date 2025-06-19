#include <stdio.h>

float average (int a, int b, int c);

float average(int a, int b, int c){
	return (a+b+c)/3.0;
}

int main()
{
	int a = 3, b= 3, c = 4;
	
	printf("The Average is : %f", average(a,b,c));
}
