#include<stdio.h>

void main()
{
    int a[2][2], b[2][2], c[2][2];
    int *p, *q, *r;
    int i;

    printf("Enter elements of Matrix A:\n");
    for(i=0;i<4;i++)
        scanf("%d", (*(a)+i));

    printf("Enter elements of Matrix B:\n");
    for(i=0;i<4;i++)
        scanf("%d", (*(b)+i));

    p = &a[0][0];
    q = &b[0][0];
    r = &c[0][0];

    for(i=0;i<4;i++)
    {
        *r = *p + *q;
        p++;
        q++;
        r++;
    }

    printf("Sum Matrix:\n");
    for(i=0;i<4;i++)
    {
        printf("%d ", *(c[0]+i));
        if((i+1)%2==0)
        printf("\n");
    }

   
}
