//Find the length of the string using Pointers.
#include <stdio.h>

void main()
{
	char str[100];
	char *p;
	p = str;
	int len = 0;

	printf("Enter string: ");
	gets(str);

	while (*p != '\0')
	{
		len++;
		p++;
	}

	printf("Length of string is %d ", len);
}
