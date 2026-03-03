//Write a program to enter a number and print sum of each digit of the number using a while loop. 
#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter Number:");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		printf("%d\n",i);
		i++;
	}
	printf("Sum Of Number=%d",sum);
}
