//Swap elements of two integer arrays using user user-defined function
#include <stdio.h>

void swapArrays(int a[], int b[], int n);

int main() {
    int a[100], b[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &b[i]);

    swapArrays(a, b, n);

    printf("After swapping:\nFirst array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\nSecond array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", b[i]);

    return 0;
}

void swapArrays(int a[], int b[], int n) {
    int i, temp;
    for(i = 0; i < n; i++) {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

