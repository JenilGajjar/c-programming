#include <stdio.h>
#define N 3
struct student
{
    char student_name[34];
    char branch_name[34];
    int roll_no;
    int year_of_joining;
} s1[N];
void main()
{
    int i;
    for (i = 0; i < N; i++)
    {
        printf("Enter the name of student %d ", i + 1);
        scanf("%s", s1[i].student_name);
        printf("Enter the brach of student %d ", i + 1);
        scanf("%s", s1[i].branch_name);
        printf("Enter the roll number of %d ", i + 1);
        scanf("%d", &s1[i].roll_no);
        printf("Enter the year of joining of student %d ", i + 1);
        scanf("%d", &s1[i].year_of_joining);
        printf("\n");
    }

    for (i = 0; i < N; i++)
    {
        printf("\nThe name of student %d is %s ", i + 1, s1[i].student_name);
        printf("\nThe brach of student %d is %s ", i + 1, s1[i].branch_name);
        printf("\nThe roll number of student %d is %d ", i + 1, s1[i].roll_no);
        printf("\nThe year of joining of student %d is %d\n", i + 1, s1[i].year_of_joining);
    }
    int roll_no, j, year;
    printf("\nEnter the roll number of any student ");
    scanf("%d", &roll_no);
    for (i = 0; i < N; i++)
    {
        if (s1[i].roll_no == roll_no)
        {
            printf("\n%s", s1[i].student_name);
            printf("\n%s", s1[i].branch_name);
            printf("\n%d", s1[i].year_of_joining);
        }
    }
    printf("\nEnter  year of joining  ");
    scanf("%d", &year);
    for (i = 0; i < N; i++)
    {
        if (s1[i].year_of_joining == year)
        {
            printf("\n%s", s1[i].student_name);
            printf("\n%s", s1[i].branch_name);
            printf("\n%d", s1[i].roll_no);
            printf("\n");
        }
    }
}