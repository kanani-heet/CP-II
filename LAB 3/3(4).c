//Generate a Fibonacci series of N given numbers using the function name fibbo()
void fibbo();
void main()
{
	int n;
	printf("enter the num");
	scanf("%d",&n);
	fibbo(n);
}
void fibbo(n)
{
	int a=0,b=1,c,i;
	for(i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
}
