#include <stdio.h>
int main()
{
	float i,p,r,n;
	printf("Enter Value of P : ");
	scanf("%f", &p);
	printf("Enter Value of R : ");
	scanf("%f", &r);
	printf("Enter Value of N : ");
	scanf("%f", &n);
	i = (p*r*n)/100;
	printf("Intrest :%f", i);
	
	return 0;
	
	
}
