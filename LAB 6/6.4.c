//Demonstrate nested structure.
#include <stdio.h>

struct person{
	char name[30];
	int hbd;
	
struct student{
	int id;
	int marks;
}s1;
}p;

void main()
{
  
  printf("enter student detais:\n");
  printf("enter name,hbd,id and marks:\n");
  scanf("%s",p.name);
  scanf("%d",&p.hbd);
  scanf("%d",&p.s1.id);
  scanf("%d",&p.s1.marks);
  printf("\nstudent name:%s\n",p.name);
  printf("student hbd:%d\n",p.hbd);
  printf("student id:%d\n",p.s1.id);
  printf("student marks:%d\n",p.s1.marks);
  
}
