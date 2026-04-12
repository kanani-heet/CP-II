//Store n elements in an array and print the elements using pointer.
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

    printf("Array elements are:\n");
    for(i = 0; i < n; i++) 
	{
        printf("%d ", *(ptr + i));
    }

}
