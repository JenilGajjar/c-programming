#include<stdio.h>
void main()
{
    int i,n=4,j,num=1;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d\t",num);
            num++;
        }
        printf("\n");
    }
    
}
