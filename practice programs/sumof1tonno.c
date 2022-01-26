#include<stdio.h>
void main()
{
	int i=1,n,sum=0;
	printf("Enter any number ");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
	
		i++;
	}
	printf("%d",sum);
}
