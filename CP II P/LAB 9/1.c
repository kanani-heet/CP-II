//Print value and address of a variable.
#include <stdio.h>

int main() {
    int num = 10;        // Normal variable
    int *ptr;            // Pointer variable

    ptr = &num;          // Store address of num in pointer

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);

    printf("Value using pointer: %d\n", *ptr);
    printf("Address stored in pointer: %p\n", ptr);

    return 0;
}
