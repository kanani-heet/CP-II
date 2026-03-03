//Find all prime numbers between given interval using functions.
#include <stdio.h>
int isPrime(int n) 
{
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) { // Optimization: check up to square root of n
        if (n % i == 0) {
            return 0; // Found a factor, not prime
        }
    }
    return 1; // No factors found, is prime
}

int main() {
    int start, end;

    printf("Enter the lower limit: ");
    scanf("%d", &start);
    printf("Enter the upper limit: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        // Call the user-defined function for each number in the range
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
