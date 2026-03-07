//Find Sum and Average of 5 Numbers
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int i, sum = 0;
    float avg;

    for(i = 1; i <= 5; i++)
    {
        sum += atoi(argv[i]);
    }

    avg = sum / 5.0;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

}
