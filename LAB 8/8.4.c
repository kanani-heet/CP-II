/*Define a structure called Players which describes details like p_name, team, score and average. Write a program to read data 
for N players using array of structure. Calculate the highest score and display the details of the top 3 players based on score. 
Also arrange all players in alphabetical order of p_name and print the sorted list.*/



#include<stdio.h>
#include<string.h>
struct player
{
 	   char p_name[100];
 	   char team[100];
 	   int score;
 	   float average; 	   
};
void main()
{
	struct player p[100],temp;
	int i,n,j,score=0;
	
	printf("enter n:");
	scanf("%d",&n);
	
	printf("enter data for players:\n");
	for(i=0;i<n;i++)
	{
		printf("enter name of p%d",i+1);
		scanf("%s",p[i].p_name);
		
		printf("enter team of p%d",i+1);
		scanf("%s",&p[i].team);
		
		printf("enter score of p%d",i+1);
		scanf("%d",&p[i].score);
		
		printf("enter average of p%d",i+1);
		scanf("%f",&p[i].average);
	}
	
	for(i=1;i<n;i++)
	{
		if(p[i].score>p[0].score)
		{
			score=p[i].score;
		}
		else
		score=p[0].score;
	}
	printf("highest score : %d\n",score);
	
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		    if(strcmp(p[i].p_name,p[j].p_name)>0)
		 {
		 	temp=p[i];
		 	p[i]=p[j];
		 	p[j]=temp;
		 }
		}
	}
	
	printf("alphabetically arranged data of players:\n");
	for(i=0;i<n;i++)
	{
		printf("enter name of p%d is %s\n",i+1,p[i].p_name);
		printf("enter team of p%s is %d\n",i+1,p[i].team);	
		printf("enter score of p%d is %d\n",i+1,p[i].score);			
		printf("enter average of p%d is %f\n",i+1,p[i].average);	
	}
}
