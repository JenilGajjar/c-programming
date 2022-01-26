#include<stdio.h>
void main()
{
    int a,*ptr;
    printf("Enter Value of a: ");
    scanf("%d",&a);
    ptr=&a;
    printf("Value of a is %d \n",a);
    printf("Value of a is %d \n",*ptr);
    printf("Address Of a is %d \n",&a);
    printf("Address Of a is %d \n",ptr);
}