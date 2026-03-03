//Define a structure called Players which describes details like p_name, team, score, average. Write a program to read data for  
//3 players and print that data.
#include <stdio.h>
struct Players {
    char p_name[50];
    char team[50];
    int score;
    float average;
};

void main() 
{
    struct Players p[3];
    int i;
 
    for(i=0;i<3;i++) 
	{
        printf("\nEnter details for Player %d\n",i+1);

        printf("Enter Player Name: ");
        scanf("%s",&p[i].p_name);

        printf("Enter Team Name: ");
        scanf("%s",&p[i].team);

        printf("Enter Score: ");
        scanf("%d",&p[i].score);

        printf("Enter Average: ");
        scanf("%f",&p[i].average);
    }

    printf("\n Player Details \n");
    for(i=0;i<3;i++)
	{
	
		printf("the p_name %s\n",p[i].p_name);
		
		printf("the team %s\n",p[i].team);
		
		printf("the score %d\n",p[i].score);

		printf("the average %\n",p[i].average);

	}
}
