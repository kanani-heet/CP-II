//Add two numbers using a user-defined function.
#include<stdio.h>
void add();
void main()
{
	add();
}
void add()
{
	int a,b,ans;
	printf("enter the number a and b");
	scanf("%d %d",&a,&b);
	ans=a+b;
	printf("total %d",ans);
}
