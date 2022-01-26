#include<stdio.h>
void swap(int *,int *);

void main()
{
    int a,b;
    printf("Enter Value of a ");
    scanf("%d",&a);
    printf("Enter Value of b ");
    scanf("%d",&b);

    swap(&a,&b);
    printf("After Swaping \n Value of a :%d \n Value of b:%d ",a,b);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}