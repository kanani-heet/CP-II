//Addition of Two Numbers
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int a, b, sum;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    sum = a + b;

    printf("Sum = %d", sum);

}
