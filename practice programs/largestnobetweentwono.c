#include<stdio.h>
void main()
{
	int a,b;
	
	printf("enter value of a=");
	scanf("%d",&a);
	
	printf("enter value of b=");
	scanf("%d",&b);
	
	if(a>=b)
	{
	if(a>b)	
	printf("%d is the largest number",a);
	else
	printf("you have enterd same number twice");
	}
	else
	printf("%d is the largest number",b);
	
	
	
	
}
