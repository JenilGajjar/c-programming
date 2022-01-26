#include<stdio.h>
void main()
{
    int z,x=3,y=4;
    z=++x*y++;
    printf("%d\n",z);   
    printf("y=%d\n",y);
    printf("x=%d",x);
}