#include<stdio.h>
void main()
{
	int a[100],*p[100];
	int n,i;
	
	printf("enter num:\n");
	scanf("%d",&n);
	
	printf("enter ele:\n");
	for(i=0;i<n;i++)
	{
		p[i]=&a[i];
		scanf("%d",p[i]);
	}
	
	printf("array ele:\n");
	for(i=0;i<n;i++)
	{
		if(*p[i]%2==0)
		{
			printf("%d even\n",*p[i]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(*p[i]%2!=0)
		{
			printf("%d odd\n",*p[i]);
		}
	}
}
