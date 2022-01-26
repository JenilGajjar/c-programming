#include<stdio.h>
#include<conio.h>>
void main()
{
	int a[10],i,large=0;
	printf("Enter Ten Numbers \n");
	
	for(i=0,i<10,++i)
	{
		scanf("%d",a[i])
	}
	for(i=0,i<10,i++)
	{
		if(a[i]>large)
		{
			large=a[i]
		}
	}
	printf("\n largest number = %d ",large);
}
