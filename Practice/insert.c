#include<stdio.h>
int main()
{
	int arr[10],n, pos, value;
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
	printf("Enter Element to Insert : ");
	scanf("%d",&value);
	printf("Enter Position : ");
	scanf("%d", &pos);
	for(int i = n; i>=pos; i--)
	{
		arr[i+1] = arr[i];
	}
	arr[pos] = value;
	n = n+1;
	printf("New Array : ");
	for(int i = 0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}
