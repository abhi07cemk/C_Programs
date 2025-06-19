// #include<stdio.h>
// int main ()
// {
//     int arr[] = {1,2,3,4,5,6,7,8,9,10};
//     int sum = 0;

//     for(int i = 0; i<10; i++)
//     {
//         if(arr[i]%2 == 0)
//         sum+=arr[i];
//     }
//     printf("Sum of Even Number : %d ", sum);
// return 0;
// }

#include <stdio.h>

int main() {
    int n;

    // Ask the user for the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array of size n
    int sum = 0;

    // Take user input for the array elements
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Loop through the array and add even numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {  // Check if the number is even
            sum += arr[i];
        }
    }

    // Output the result
    printf("The sum of all even numbers in the array is: %d\n", sum);

    return 0;
}
