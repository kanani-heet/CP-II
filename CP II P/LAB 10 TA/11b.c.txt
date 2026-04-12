#include<stdio.h>
void main()
{
	int a[3][3],*p;
	int i,j,n,sum;
	
	printf("enter ele\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(j=0;j<3;j++)
	{
		sum=0;
		for(i=0;i<3;i++)
		{
			p= &a[i][j];
			sum= sum + *p;
		}
		printf("sum %d  %d\n",j,sum);
	}
}
