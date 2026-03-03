//Find the maximum number between two numbers using a function.
#include<stdio.h>
int max(int,int);
void main()
{
	int num1,num2,max;
	printf("enter the number");
	scanf("%d %d",&num1,&num2);
	max = (num1,num2);
	printf("%d",max);
}
int max(int num1,int num2)
{
	if(num1<num2)
	{
      return num1;
	}
	else
	{
	  return num2;
	}
}
