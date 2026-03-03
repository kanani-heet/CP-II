//Find the power of any number using recursion.
#include<stdio.h>
int power(int x,int y);
void main()
{
	int b,e,r;
	
	printf("enetr b \n");
	scanf("%d",&b);
	printf("enetr e \n");
	scanf("%d",&e);
	
	
	r = power(b, e); 
	
	printf("%d",r);

}
int power(int x,int y)
{
	if(y==0)
	 return 1;
	 
	 else
	 
	  return x*power(x,y-1);
}

