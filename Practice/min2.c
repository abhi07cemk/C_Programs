#include<stdio.h>
int main()
{
	int a[20], n;
	printf("Enter Array Size : ");
	scanf("%d", &n);
	for(int  i = 0; i<n; i++)
	{
		printf("Enter Element %d : ", i+1);
		scanf("%d", &a[i]);
	}
	
	int min1 = a[0];
	int min2 = a[1];
	
	if(a[0] > a[1])
	{
		min1 = a[0];
		min2 = a[1];
	}
	else
	{
		min2 = a[0];
		min1 = a[1];
	}
	for(int i = 2; i<n; i++)
	{
		if(a[i] < min1)
		{
			min2 = min1;
			min1 = a[i];
		}
		else if(a[i] < min2 && a[i]!=min1)
		{
			min2 = a[i];
		}
	}
	printf("Second Minimum : %d ", min2);
}
