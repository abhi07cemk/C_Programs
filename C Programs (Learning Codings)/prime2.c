#include<stdio.h>

int main()
{
    int n1, n2, i, j, isPrime;

    printf("Enter starting No: ");
    scanf("%d", &n1);
    printf("Enter ending No: ");
    scanf("%d", &n2);

    printf("Prime numbers between %d and %d are:\n", n1, n2);

    for (i = n1; i <= n2; i++) {
        if (i < 2) {
            continue; // Numbers less than 2 are not prime
        }
        
        isPrime = 1; // Assume i is prime
        
        for (j = 2; j * j <= i; j++) { // Check divisibility up to sqrt(i)
            if (i % j == 0) {
                isPrime = 0; // i is not prime
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", i); // Print prime number
        }
    }

    return 0;
}




// #include<stdio.h>
// int main ()
// {
//     int n1, n2, i,j;
//     printf("Enter starting No : ");
//     scanf("%d", n1);
//     printf("Enter Ending no : ");
//     scanf("%d", n2);
//     for(i = n1; i<=n2; i++)
//     {
//         for(j = 2; j<=i; j++)
//         {
//             if(i%j == 0)
//             break;
//         }
      
//     }
//     if(i==j)
//     printf("%d", j);
// return 0;
// }