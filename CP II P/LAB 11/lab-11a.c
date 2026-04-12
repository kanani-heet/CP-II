#include<stdio.h>
void main()
{
	int a[2][2],b[2][2],c[2][2],i,*p,*q,*r;
	
	p=&a[0][0];
	q=&b[0][0];
	r=&c[0][0];
	
	printf("enter a matrices\n");
	for(i=0;i<4;i++)
	{
		scanf("%d\n",*(a)+i);
	}
	
	printf("enter b matrices\n");
	for(i=0;i<4;i++)
	{
		scanf("%d\n",*(b)+i);
	}
	
	for(i=0;i<4;i++)
	{
		*r=*p+*q;
		p++;
		q++;
		r++;
	}
	
	printf("matrices of sum\n");
	for(i=0;i<4;i++)
	{
		printf("%d",*c[0]+i);
		if((i+1)%2==0)
		printf("\n");
	}
}
