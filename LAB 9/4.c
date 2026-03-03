//Copy one array to another using pointers. 
#include <stdio.h>

int main() {
    int arr1[5] /*= {10, 20, 30, 40, 50}*/;
    int arr2[5];

    int *p1 = arr1;   // Pointer to first array
    int *p2 = arr2;   // Pointer to second array
    int i;

    // Copy elements using pointers
    for(i = 0; i < 5; i++) {
        *(p2 + i) = *(p1 + i);
    }

    // Display copied array
    printf("Elements of second array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", *(p2 + i));
    }

    return 0;
}
