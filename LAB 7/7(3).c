//Create structure student with name, percentage and age. Read data of N students using array of structure. Arrange student data alphabetically and print all data.

#include<stdio.h>
#include<string.h>
struct student{
	char name[50];
	float per;
	int age;
};

void main()
{

	int i,n,j;
	
	printf("enter the n number");
	scanf("%d",&n);
	
	struct student s[n],temp;
		
	for(i=0;i<n;i++)
	{
		printf("enter the student name");
		scanf("%s",&s[i].name);
		
		printf("enter the student per");
		scanf("%f",&s[i].per);
		
		printf("enter the student age");
		scanf("%d",&s[i].age);
		
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
		    if(strcmp(s[i].name,s[j].name)>0)
	         {
	           temp=s[i];
			   s[i]=s[j];
			   s[j]=temp; 
	         }
		}
	}
	 for(i=0;i<n;i++)
	 {
		printf("the student name %s\n",s[i].name);
		
		printf("the student per %f\n",s[i].per);

		printf("the student name %d\n",s[i].age);
	 }
	

}

