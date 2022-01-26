#include<stdio.h>
struct student_record
{
    char name[34];
    char branch[34];
    int total_marks;
};
void main()
{
    int n;
    printf("Enter number of student ");
    scanf("%d",&n);
    struct student_record student[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter name of student %d ",i+1);
        scanf("%s",student[i].name);
        printf("Enter the branch of %s ",student[i].name);
        scanf("%s",student[i].branch);
        printf("Enter marks of %s ",student[i].name);
        scanf("%d",&student[i].total_marks);
    }
    for (int i = 0; i < n; i++)
    {
        printf("\nThe name of student %d is %s \n",i+1,student[i].name);
        printf("The brach of %s is %s \n",student[i].name,student[i].branch);
        printf("The total marks of %s is %d \n",student[i].name,student[i].total_marks);
    }
    

}