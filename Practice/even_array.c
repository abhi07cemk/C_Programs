#include <stdio.h>
#define SIZE 10

int main()
{
	int arr [SIZE] = {1,2,3,4,5,6,7,8,9,10};
	int sum = 0;
	
	for(int i = 0; i < SIZE; i++)
	{
		if(arr[i]%2 == 0)
		{
			sum += arr[i];
		}
	}
	printf("The Result of Even Integer in Array is %d", sum);
	return 0;
}
