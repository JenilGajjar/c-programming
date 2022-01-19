#include<stdio.h>
void main()
{
    int n=10,i,j;

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
        {
            printf("%4d",i*j);
        }
        printf("\n");
    }
}