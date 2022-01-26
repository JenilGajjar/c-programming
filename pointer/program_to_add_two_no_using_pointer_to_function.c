#include<stdio.h>
int sum(int a,int b)
{
    return a+b;
}
void main()
{
    int a,b;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter Value of b :");
    scanf("%d",&b);
    int (*function_pointer)(int ,int);
    function_pointer=&sum;
    int add=(*function_pointer)(a,b);
    printf("Addition Of %d and %d is %d ",a,b,add);
}