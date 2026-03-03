// Find whether the given number is prime or not.
#include<stdio.h>
void main()
{
	int n,i=1,count=0;
	printf("Enter The Number:");
	scanf("%d",&n);
	do
	{
		if(n%i==0)
		{
			count++;
		}
		i++;	
	}
	while (i<=n);
	if (count==2)
		{ 
			printf("Number Is Prime");
		}	
		else
		{
			printf("Number Is Not Prime");	
		}
}
