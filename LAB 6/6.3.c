//Demonstrate the difference between structure and union.
#include<stdio.h>

struct employee{


	int id;
	char name[30];
};

union student{
	int id;
	char name[30];
};

  	void main()
{

 	struct employee e;
 	
 	printf("enter id\n");
 	scanf("%d",&e.id);
 	printf("enter name\n");
 	scanf("%s",&e.name);
 	
 	printf("ID: %d\n", e.id);
 	printf("name: %s\n",e.name);
 	
 	union student s;
 	
 	printf("enter id\n");
 	scanf("%d",&s.id);
 	printf("enter name\n");
 	scanf("%s",&s.name);
 	
 	printf("ID: %d\n", s.id);
 	printf("name: %s\n",s.name);
 }

