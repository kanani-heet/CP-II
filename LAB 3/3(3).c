//Count simple interest using a function.
#include<stdio.h>
void main()
{
	si();
}
void si()
{
	float p,r,t,ans;
	
	printf("enter the p");
	scanf("%f",&p);
	printf("enter the r");
	scanf("%f",&r);
	printf("enter the t");
	scanf("%f",&t);
	
	ans=(p*r*t)/100;
	printf("%f",ans);
}
