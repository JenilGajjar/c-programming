#include <stdio.h>
struct time
{
    int hour;
    int minute;
    int second;
};
void main()
{
    struct time member[3];
    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter hour : ");
        scanf("%d", &member[i].hour);
        printf("Enter minute : ");
        scanf("%d", &member[i].minute);
        printf("Enter second : ");
        scanf("%d", &member[i].second);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("\n the time of member no. %d is %d:%d:%d ", i + 1, member[i].hour, member[i].minute, member[i].second);
    }
}