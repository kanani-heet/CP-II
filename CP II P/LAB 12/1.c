//Allocate and De-allocate Memory for int, char and float
#include <stdio.h>
#include <stdlib.h>

void main() {
    int *i;
    float *f;
    char *c;

    i = (int*) malloc(sizeof(int));
    f = (float*) malloc(sizeof(float));
    c = (char*) malloc(sizeof(char));

    printf("Enter an integer: ");
    scanf("%d", i);

    printf("Enter a float: ");
    scanf("%f", f);

    printf("Enter a character: ");
    scanf(" %c", c);

    printf("\nInteger = %d\n", *i);
    printf("Float = %f\n", *f);
    printf("Character = %c\n", *c);

    free(i);
    free(f);
    free(c);

}
