#include <stdio.h>

// Function Declaration
int checkPrime(int n);

int main() {
    int num, result;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Function Call
    result = checkPrime(num);

    if (result == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

// Function Definition
int checkPrime(int n) {
    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        return 0; 
    }

    // Check for divisors from 2 up to n/2
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; // Found a divisor, so not prime
        }
    }

    return 1; // No divisors found, it is prime
}
