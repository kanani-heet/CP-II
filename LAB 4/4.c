//Perform the task of reversing a number and return that number, then check given number is a palindrome or not.
#include <stdio.h>
int reverseNumber(int num);

int main() 
{
    int originalNum, reversedNum;
    printf("Enter an integer: ");
    scanf("%d", &originalNum);

    reversedNum = reverseNumber(originalNum);
    printf("Reversed Number: %d\n", reversedNum);

    if (originalNum == reversedNum) 
	{
        printf("%d is a palindrome.\n", originalNum);
    } else 
	{
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}


int reverseNumber(int n) 
{
    int reversed =0,remainder;

    while (n != 0) {
        remainder = n % 10;          
        reversed = reversed * 10 + remainder; 
        n /= 10;                    
    }

    return reversed;
}
