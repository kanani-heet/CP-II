//Print positive and negative numbers in array using pointers. 
#include <stdio.h>

void main() {
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

    printf("Positive numbers:\n");
    for(i = 0; i < n; i++) 
	{
        if(*(ptr + i) > 0) 
		{
            printf("%d ", *(ptr + i));
        }
    }

    printf("\nNegative numbers:\n");
    for(i = 0; i < n; i++) 
	{
        if(*(ptr + i) < 0) 
		{
            printf("%d ", *(ptr + i));
        }
    }

}
