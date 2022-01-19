#include<stdio.h>
void main()
{
    int i,n;

    printf("Enter any Number");
    scanf("%d",&n);

    int num[n];

    for ( i = 0; i < n; i++)
    {
        printf("Enter Value of Num[%d] : ",i);
        scanf("%d",&num);
    }
    
}