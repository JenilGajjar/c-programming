#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter Any Number ");
    scanf("%d",&n);
    
    int matrix1[n][n],matrix2[n][n],matrix3[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Value Of a[%d][%d] ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Value Of b[%d][%d] ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\n Matrix 1 \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
     printf("\n Matrix 2 \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix2[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }
    printf("\n Matrix3 \n ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix3[i][j]);
        }
        printf("\n");
    }
}