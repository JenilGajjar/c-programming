#include<stdio.h>
void main()
{
	int  i=1,n,max,min,m;
	printf("Enter Any Number ");
	scanf("%d",&n);
	while(i<=n)
	{	scanf("%d",&m);	
		if(i==1)
		{
			max=min=m;			
		}	
		if(m>max)
		{
			max=m;
		}
		if(m<min)
		{
			min=m;		
		}
		i++;
	}
	printf("%d is Maximum Number \n",max);
	printf("%d is Minimum Number ",min);	
}
