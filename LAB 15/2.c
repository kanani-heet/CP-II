//Find Maximum of Two Numbers
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int a, b;

    a = atoi(argv[1]);
    b = atoi(argv[2]);

    if(a > b)
        printf("Maximum = %d", a);
    else
        printf("Maximum = %d", b);

}
