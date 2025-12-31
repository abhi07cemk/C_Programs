#include<stdio.h>
int main()
{
	int arr[10],n, pos;
	printf("Enter Array Size : ");
	scanf("%d", &n);
	for(int  i = 0; i<n; i++)
	{
		printf("Enter Element %d : ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Old Array : ");
	for(int i = 0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("Enter Position : ");
	scanf("%d", &pos);
	for(int i = pos; i<=n; i++)
	{
		arr[i] = arr[i+1];
	}
	n--;
	printf("New Array : ");
	for(int i = 0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}
