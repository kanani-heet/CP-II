//Create, declare and initialise the structure employee.
#include<stdio.h>
struct employee
{
	int id;
	char name[50];
	float salary;
};

void main()
{
	struct employee e1;
	printf("enter the employee id,name,salary");
	scanf("%d",&e1.id);
	scanf("%s",&e1.name);
	scanf("%f",&e1.salary);
	
	printf("employee id %d\n",e1.id);
	printf("employee name %s\n",e1.name);
	printf("employee salary %f\n",e1.salary);
	
}
