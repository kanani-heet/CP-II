// Find factorial of the given number (For Loop).
#include<stdio.h>
void main()
{
	int a,fact=1,i;
	printf("Enter The Number:");
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		fact*=i;	
	}
	printf("Factorial=%d",fact);
}
