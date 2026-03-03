// Define a union called Players which describes details like p_name, team, score, average. Write a program to read data for 3  
//players and print that data.
#include <stdio.h>

union Players {
    char p_name[50];
    char team[50];
    int score;
    float average;
};

void main() 
{
    union Players p[3];
    int i;

    for(i=0;i<3;i++) 
	{
        printf("\nEnter details for Player %d\n",i+1);

        printf("Enter Player Name: ");
        scanf("%s",&p[i].p_name);
        printf("Name: %s\n", p[i].p_name);
       
        printf("Enter Team Name: ");
        scanf("%s",&p[i].team);
        printf("Team: %s\n", p[i].team);

        printf("Enter Score: ");
        scanf("%d", &p[i].score);
        printf("Score: %d\n", p[i].score);

        printf("Enter Average: ");
        scanf("%f", &p[i].average);
        printf("Average: %.2f\n", p[i].average);

    }

}

