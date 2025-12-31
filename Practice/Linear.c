#include<stdio.h>
int LinearSearch(int arr[],int n, int target)
{
	for(int i = 0; i<n; i++)
	{
		if(arr[i] == target)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int arr[10],n, key;
	printf("Enter Array Size : ");
	scanf("%d", &n);
	for(int  i = 0; i<n; i++)
	{
		printf("Enter Element %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Enter Element to Search : ");
	scanf("%d", &key);
	
	int result = LinearSearch(arr,n,key);
	
	if(result == -1)
	{
		printf("Element not Found");
	}
	else
	{
		printf("Result Found at Index %d ", result);
	}
	return 0;
}
