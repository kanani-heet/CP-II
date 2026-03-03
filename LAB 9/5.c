//Swap two arrays using pointers. 
#include <stdio.h>

int main() {
    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 20, 30, 40, 50};
    int temp, i;

    int *p1 = arr1;
    int *p2 = arr2;

    // Swap elements using pointers
    for(i = 0; i < 5; i++) {
        temp = *(p1 + i);
        *(p1 + i) = *(p2 + i);
        *(p2 + i) = temp;
    }

    printf("After Swapping:\n");

    printf("Array 1: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(p1 + i));
    }

    printf("\nArray 2: ");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(p2 + i));
    }

    return 0;
}
