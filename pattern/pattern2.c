#include<stdio.h>
void main()
{
    int i,n=4,j;

    for(i=1;i<=n;i++)
    {   int num=i;
        for(j=1;j<=i;j++)
        {
            printf("%4d",num);
            num++;
        }
        printf("\n");
    }
}