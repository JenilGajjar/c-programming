#include<stdio.h>
void main()
{
    int i,j,n=4;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                // printf("");
                if(j%2!=0)
                {
                    printf("1\t");
                }
                else
                {
                    printf("0\t");
                }
            }
            else
            {
                if(j%2!=0)
                {
                    printf("0\t");
                }
                else
                {
                    printf("1\t");
                }
            }
        }
        printf("\n");
    }
}