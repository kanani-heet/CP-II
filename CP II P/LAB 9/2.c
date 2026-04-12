//Demonstrate int, float, double and char pointer.
#include <stdio.h>

int main() {
    int i = 10;
    float f = 5.5f;
    double d = 20.12345;
    char c = 'A';

    // Pointer declarations
    int *ip = &i;
    float *fp = &f;
    double *dp = &d;
    char *cp = &c;

    printf("---- INT Pointer ----\n");
    printf("Value of i: %d\n", i);
    printf("Address of i: %p\n", &i);
    printf("Value using pointer: %d\n", *ip);
    printf("Address stored in pointer: %p\n\n", ip);

    printf("---- FLOAT Pointer ----\n");
    printf("Value of f: %.2f\n", f);
    printf("Address of f: %p\n", &f);
    printf("Value using pointer: %.2f\n", *fp);
    printf("Address stored in pointer: %p\n\n", fp);

    printf("---- DOUBLE Pointer ----\n");
    printf("Value of d: %.5lf\n", d);
    printf("Address of d: %p\n", &d);
    printf("Value using pointer: %.5lf\n", *dp);
    printf("Address stored in pointer: %p\n\n", dp);

    printf("---- CHAR Pointer ----\n");
    printf("Value of c: %c\n", c);
    printf("Address of c: %p\n", &c);
    printf("Value using pointer: %c\n", *cp);
    printf("Address stored in pointer: %p\n", cp);

    return 0;
}
