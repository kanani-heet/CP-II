// Find the factorial of a number using a function and a recursive function.
#include<stdio.h>
int fact(int n);
void main()
{
	int n,ans;
	
	printf("enetr n \n");
	scanf("%d",&n);
	
	ans=fact(n);
	
	printf("%d",ans);
}
int fact(int n)
{
	if(n==1)
	return 1;
	
	else
	
	return n*fact(n-1);
}
