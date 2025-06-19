#include <stdio.h>
#include <conio.h>
void main()
{
	int a;
	printf("Enter Any Number : ");
	scanf("%d", &a);
	printf("----------------\n");
	if(a%2 == 0)
	{
		printf("\nNumber is Even.");
	}
	else
	{
		printf("\nNumber is Odd.");
	}
	getch();
}
