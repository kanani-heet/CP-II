// Print multiplication table of a given number. (For Loop)
#include<stdio.h>
void main()
{
	int n,i=1,Table;
	printf("Enter The Number:");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		Table=i*n;
		printf("%d*%d=%d\n",n,i,Table);
	}	
}
