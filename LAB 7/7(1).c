// Create structure student with name, percentage and age. Read data of 5 students using array of structure.

#include<stdio.h>
struct student{
	char name[50];
	float per;
	int age;
};

void main()
{
	struct student s[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the student name");
		scanf("%s",&s[i].name);
		
		printf("enter the student per");
		scanf("%f",&s[i].per);
		
		printf("enter the student age");
		scanf("%d",&s[i].age);
	}
	for(i=0;i<5;i++)
	{
	
		printf("the student name %s\n",s[i].name);
		
		printf("the student per %f\n",s[i].per);

		printf("the student name %d\n",s[i].age);

	}
}
