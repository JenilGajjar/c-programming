#include<stdio.h>
void main()
{
	int i,n;
	printf("Enter Any Number ");
	scanf("%d",&n);
	
	while(i<=n)
	{	if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
