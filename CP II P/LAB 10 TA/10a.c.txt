#include<stdio.h>
void main()
{
	int a,b,*p,*q;
	int tamp=0;
	
	p=&a;
	q=&b;
	
	printf("enter a and b:\n");
	scanf("%d\n",&a);
	scanf("%d",&b);
	
	printf("befor swaping a=%d  and  b=%d\n",*p,*q);
	
	tamp=*p;
	*p=*q;
	*q=tamp;
	
	printf("after swaping a=%d  and  b=%d",*p,*q);
}
