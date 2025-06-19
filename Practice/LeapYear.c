#include <stdio.h>

int main()
{
	int year;
	
	printf("Enter A Year : ");
	scanf("%d", &year);
	
	if(year%400 == 0)
	{
		printf("%d is a Leap Year", year);
	}
	else if (year%100 == 4)
	{
		printf("%d is  Not Leap Year", year);
	}
	else if(year%4  == 0)
	{
		printf("%d is a Leap Year", year);
	}
	else
	{
		printf("%d is Not a Leap Year", year);	
	}
	return 0;
}
