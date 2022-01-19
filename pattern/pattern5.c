#include<stdio.h>
void main()
{
    int i,j,k,n=4;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=(n-i);j++)
        {
            printf("\t");    
        }
        for(k=1;k<=i;k++) 
        {
            // if(k%2!=0)
            // {
                printf("%d",i);
            // }
            // else
            // {
                // printf("\t");
            // }
        }  
        printf("\n");
    }
}