//Demonstrate realloc()
#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int *ptr, n, i;

    printf("Enter initial number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    printf("Enter numbers:\n");
    for(i = 0; i < n; i++) 
	{
        scanf("%d", ptr + i);
    }

    printf("Enter new size: ");
    scanf("%d", &n);

    ptr = (int*) realloc(ptr, n * sizeof(int));

    printf("Enter new numbers:\n");
    for(i = 0; i < n; i++)
	 {
        scanf("%d", ptr + i);
    }

    printf("Numbers are:\n");
    for(i = 0; i < n; i++) 
	{
        printf("%d ", *(ptr + i));
    }

    free(ptr);

}
