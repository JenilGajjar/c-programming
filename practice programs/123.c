#include<stdio.h>
void main()
{
	int n,max,min,i;
	
	scanf("%d \n",&n);
	
	max=n;
	min=n;
	
	for(i=1;i<10;i++)
	{
		scanf("%d \n",&n)
		
		max=(n>max)?n:max;
		min=(n<min)?n:min;
	}	
	printf("\n Maximum number is =%d ",max);
	printf("\n Maximum number is =%d ",min);
}
