#include <stdio.h>
#include <math.h>

int main()
{
	double A,B,C;
	printf("Enter Side A : ");
	scanf("%f", &A);
	
	printf("Enter Side B : ");
	scanf("%f", &B);
	
	C = sqrt(A*A + B*B);
	printf("Side C :  %f", C);
	
	return 0;
}
