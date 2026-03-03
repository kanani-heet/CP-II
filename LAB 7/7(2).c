//Create structure student with name, percentage and age. Read data of N students using array of structure. Print details of student with maximum percentage.

#include<stdio.h>
struct student{
	char name[50];
	float per;
	int age;
};

void main()
{

	int i,n,max=0;
	
	printf("enter the n number");
	scanf("%d",&n);
	
	struct student s[n];
		
	for(i=0;i<n;i++)
	{
		printf("enter the student name");
		scanf("%s",&s[i].name);
		
		printf("enter the student per");
		scanf("%f",&s[i].per);
		
		printf("enter the student age");
		scanf("%d",&s[i].age);
	

	  if(s[i].per > s[max].per)
	  {
	  	max=i;
	  }
    }
	
	
		printf("the student name %s\n",s[max].name);
		
		printf("the student per %f\n",s[max].per);

		printf("the student name %d\n",s[max].age);

}

