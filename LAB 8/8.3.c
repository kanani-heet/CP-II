//Define a structure called Players which describes details like p_name, team, score, average. Write a program to read data for  
//N players and arrange p_name in alphabetical order.

#include <stdio.h>
#include <string.h>

struct Players {
    char p_name[50];
    char team[50];
    int score;
    float average;
};

void main() 
{
    int n,i,j;
    struct Players temp;

    printf("enter number of players");
    scanf("%d",&n);

    struct Players p[n];

    for(i=0;i<n;i++) 
	{
        printf("enter details for Player %d\n",i+1);

        printf("enter player name");
        scanf("%s",&p[i].p_name);

        printf("enter team name");
        scanf("%s",&p[i].team);

        printf("enter score");
        scanf("%d",&p[i].score);

        printf("enter average");
        scanf("%f",&p[i].average);
    }

    for(i=0;i<n-1;i++) 
	{
        for(j=i+1;j<n;j++) 
		{
            if(strcmp(p[i].p_name, p[j].p_name)>0) 
			{
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    for(i=0;i<n;i++) 
	{
        printf("name:%s\n", p[i].p_name);
        
        printf("team:%s\n", p[i].team);
        
        printf("score:%d\n", p[i].score);
        
        printf("average:%f\n", p[i].average);
        
    }


}

