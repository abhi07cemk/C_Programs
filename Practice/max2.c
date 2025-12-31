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
	
	int max1 = a[0];
	int max2 = a[1];
	
	if(a[0] > a[1])
	{
		max1 = a[0];
		max2 = a[1];
	}
	else
	{
		max2 = a[0];
		max1 = a[1];
	}
	for(int i = 2; i<=n; i++)
	{
		if(a[i] > max1)
		{
			max2 = max1;
			max1 = a[i];
		}
		else if(a[i] > max2)
		{
			max2 = a[i];
		}
	}
	printf("Second Largest : %d ", max2);
}
