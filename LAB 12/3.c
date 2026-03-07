//Sum of n Numbers Using calloc()
#include <stdio.h>
#include <stdlib.h>

void main() 
{
    int n, i, sum = 0;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    printf("Enter numbers:\n");
    for(i = 0; i < n; i++)
	 {
        scanf("%d", ptr + i);
    }

    for(i = 0; i < n; i++)
	 {
        sum += *(ptr + i);
    }

    printf("Sum = %d", sum);

    free(ptr);

}
