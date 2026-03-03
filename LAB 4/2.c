//Swap two numbers using call by value. 
#include <stdio.h>
void swap(int x,int y);

int main() 
{
    int a,b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swapping in:a=%d,b=%d\n",a,b);
    swap(a,b);
    printf("After Swapping in:a=%d,b=%d\n",a,b);
    return 0;
}

void swap(int x,int y) 
{
    int temp;
    temp=x;
    x=y;
    y=temp;

    printf("Inside Swap Function:x=%d,y=%d\n",x,y);
}
