#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter Any Number: ");
    scanf("%d", &n);
    
    // Loop from 1 to n-1 (to find divisors)
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    
    // Check if the sum of divisors is equal to the number
    if (sum == n) {
        printf("Perfect Number\n");
    } else {
        printf("Non-Perfect Number\n");
    }

    return 0;
}
