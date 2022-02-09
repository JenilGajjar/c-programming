#include<stdio.h>
void main()
{
    int n,i,j,k,sum;
    printf("Enter Any Number ");
    scanf("%d",&n);

    int matrix1[n][n],matrix2[n][n];

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Value of a[%d][%d] ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Value of b[%d][%d] ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("\n Matrix1: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix1[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Matrix1: \n");
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
            sum=0;
            for(k=0;k<n;k++)
            {
                sum=sum+(matrix1[i][k]*matrix2[k][j]);
            }
        }
    }
    printf("\n Multplication Of 2 Matrix \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%4d",sum);
        }
    printf("\n");
    }
}