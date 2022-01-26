#include<stdio.h>
void main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,max,min;
	
	printf("Enter Ten Numbers ");
	scanf("%d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
	
	max=n1;
	min=n1;
	
	if(n2>max)
	{
		max=n2;		
		if(n3>max)
			{
				max=n3;
				if(n4>max)
				{
					max=n4;
					if(n5>max);
					{
						max=n5;
						if(n6>max)
						{
							max=n6;
							if(n7>max)
					 		{
								max=n7;
								if(n8>max)
								{
									max=n8;
									if(n9>max)
									{
										max=n9;
										if(max<n10)
										{
											max=n10;
										}		
									}
								}
							}
						}
					}
				}
			}
		}
	
	if(n2<min)
	{
		min=n2;
		if(n3<min)
		{
			min=n3;
			if(n4<min)
			{	
				min=n4;
				if(n5<min)
				{
					min=n5;
					if(n6<min)
					{
						min=n6;
						if(n7<min)
						{
							min=n7;
							if(n8<min)
							{
								min=n8;
								if(n9<min)
								{
									min=n9;
									if((n10<min))
									{
										min=n10;
									}
								}
							}
						}
					}
				}
			}
		}
	}
		printf("\n Maximum Number is %d ",max);
		printf("\n Minimum Number is %d ",min);
	
		
	
}
