//Find Length of String Using Pointers
#include <stdio.h>

void main() 
{
    char str[100];
    char *ptr;
    int length = 0;

    printf("Enter a string: ");
    gets(str);

    ptr = str;

    while(*ptr != '\0')
	{
        length++;
        ptr++;
    }

    printf("Length of string = %d", length);

}
