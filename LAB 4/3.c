//Swap two numbers using call by reference.
#include <stdio.h>

void swap(int *a, int *b);
int main() 
{
    int x, y;

    printf("Enter two integers:\n");
    printf("x: ");
    scanf("%d", &x);
    printf("y: ");
    scanf("%d", &y);

    printf("\nBefore Swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After Swapping: x = %d, y = %d\n", x, y);

    return 0;
}

void swap(int *a, int *b) 
{
    int temp;

    temp = *a;   
    *a = *b;     
    *b = temp;    
}
