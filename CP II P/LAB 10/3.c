//Find even and odd numbers in array using pointer. 
#include <stdio.h>

void main() 
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) 
	{
        scanf("%d", ptr + i);
    }

    printf("Even numbers:\n");
    for(i = 0; i < n; i++) 
	{
        if(*(ptr + i) % 2 == 0) 
		{
            printf("%d ", *(ptr + i));
        }
    }

    printf("\nOdd numbers:\n");
    for(i = 0; i < n; i++) 
	{
        if(*(ptr + i) % 2 != 0) 
		{
            printf("%d ", *(ptr + i));
        }
    }

}
