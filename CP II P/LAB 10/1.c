//Swap the values of two numbers using a pointer.
#include <stdio.h>

void swap(int *a, int *b) 
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    swap(&x, &y);

    printf("After swapping:\n");
    printf("First number = %d\n", x);
    printf("Second number = %d\n", y);

}
