#include <stdio.h>
struct date_of_joining
{
    int d;
    int m;
    int y;
};
struct employee
{
    char name[34];
    int salary;
    struct date_of_joining date;
};
void main()
{
    int n;
    printf("Enter the number of person ");
    scanf("%d",&n);
    struct employee person[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the name of the person ");
        scanf("%s", person[i].name);
        printf("Enter the salary of the person ");
        scanf("%d", &person[i].salary);
        printf("Enter the date of joining ");
        scanf("%d", &person[i].date.d);
        printf("Enter the month of joining ");
        scanf("%d", &person[i].date.m);
        printf("Enter the year of joining ");
        scanf("%d", &person[i].date.y);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nName  %s \n",person[i].name);
        printf("Salary : %d \n",person[i].salary);
        printf("Date of joining %d/%d/%d \n ",person[i].date.d,person[i].date.m,person[i].date.y);
    }   
}