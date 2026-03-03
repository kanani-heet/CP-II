// Pass an array in a function to print the array elements.
#include<stdio.h>
void arr(int a[],int n);
void main()
{
	int a[100],n,i;
	
	printf("enetr num:");
	scanf("%d",&n);
	
	printf("enetr ele\n");
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	arr(a,n);	
}
void arr(int a[],int n)
{
	int i;
	printf("arr ele\n");
	
		for(i=0;i<n;i++)
		
		printf("%d\n",a[i]);
	
}
