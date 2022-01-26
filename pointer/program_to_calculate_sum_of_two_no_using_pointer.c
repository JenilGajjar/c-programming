#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter Any two number ");
    scanf("%d %d",&a,&b);
    int *ptr1=&a,*ptr2=&b;
    printf("Addition Of %d and %d is %d \n",a,b,a+b);
    printf("Addition Of %d and %d is %d \n",a,b,*ptr1+*ptr2);
    printf("Address Of a is %x \n",ptr1);
    printf("Address Of b is %p \n",ptr2);
}