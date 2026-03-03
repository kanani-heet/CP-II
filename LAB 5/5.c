//Find the reverse of any number using recursion
#include <stdio.h>
int reverseNumber(int num, int reversed);

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number < 0) {
        result = -reverseNumber(-number, 0);
    } else {
        result = reverseNumber(number, 0);
    }

    printf("Reversed Number: %d\n", result);

    return 0;
}

int reverseNumber(int num, int reversed) {
    
    if (num == 0) {
        return reversed;
    }

    return reverseNumber(num / 10, (reversed * 10) + (num % 10));
}
