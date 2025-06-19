#include <stdio.h>
int main()
{
    int arr[10], i,n, count_pos=0, count_neg = 0, count_zero=0;
    printf("Enter Number of elements : ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i = 0; i<n; i++)
    {
        if(arr[i] > 0)
        {
             count_pos++;
        }
        else if(arr[i] == 0)
        {
            count_zero++;
        }
        else
        {
            count_neg++;
        }
       
    }
    printf("No of Positive Values : %d\n", count_pos);
    printf("No of zeros : %d\n", count_zero);
    printf("No of Negative Values : %d", count_neg);
    return 0;
}