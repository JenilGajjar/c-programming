#include<stdio.h>
struct cricket 
{
    char player_name[34];
    char team_name[34];
    float avg;
};
void main()
{
    int n;
    printf("Enter Number of players : ");
    scanf("%d",&n);
    struct cricket player[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of the player ");
        scanf("%s",player[i].player_name);
        printf("Enter the name of the team ");
        scanf("%s",player[i].team_name);
        printf("Enter the average of the player ");
        scanf("%f",&player[i].avg);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe name of player %d is %s \n",i+1,player[i].player_name);
        printf("The name of the team of %s is %s \n",player[i].player_name,player[i].team_name);
        printf("The average of %s is %.2f \n",player[i].player_name,player[i].avg);
    }
    
    
}
