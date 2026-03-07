//Count Even and Odd Numbers
#include <stdio.h>
#include <stdlib.h>

void main(int argc, char *argv[])
{
    int i, num;
    int even = 0, odd = 0;

    for(i = 1; i < argc; i++)
    {
        num = atoi(argv[i]);

        if(num % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even Numbers = %d\n", even);
    printf("Odd Numbers = %d\n", odd);

}
