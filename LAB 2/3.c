//Calculate length of string without using built-in function
#include <stdio.h>

void main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    gets(str);   // for simple lab practice

    while(str[i] != '\0') {
        length++;
        i++;
    }

    printf("Length of string = %d", length);

}
