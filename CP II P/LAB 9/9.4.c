//Copy one array to another using pointers. 
#include <stdio.h>

void main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];
    int i;
    
    int *p = a; 
    int *q = b;   
    
    for (i = 0; i < 5; i++) 
	{
        *(q + i) = *(p + i);
    }

    printf("Copied array: ");
    for (i = 0; i < 5; i++) 
	{
        printf("%d ", b[i]);
    }

}
