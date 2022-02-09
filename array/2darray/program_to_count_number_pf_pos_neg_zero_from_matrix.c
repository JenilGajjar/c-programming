#include<stdio.h>
void main()
{
    int n,i,j,pos=0,neg=0,zero=0;
    printf("Enter Any Number ");
    scanf("%d",&n);

    int num[n][n];

    for ( i = 0; i < n; i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter Value Of num[%d][%d] ",i,j);
            scanf("%d",&num[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",num[i][j]);
            
            if(num[i][j]==0)
            {
                zero++;
            }
            else if (num[i][j]>0)
            {
                pos++;
            }
            
            else
            {
                neg++;
            }
        }
        printf("\n");
    }
    printf(" Positive Numbers : %d \n Negative Numbers : %d \n Zeros : %d ",pos,neg,zero);
    

}