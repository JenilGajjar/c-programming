#include<stdio.h>
void main()
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	printf("\n Enter Ten Numbers \n");
	scanf("%d %d %d %d %d %d %d %d %d %d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);

	if(n1>n2 && n1>n3 && n1>n4 && n1>n5 && n1>n6 && n1>n7 && n1>n8 && n1>n9 && n1>n10)
	{
		printf("%d is the Largest number ",n1);
	}
	
	else if (  n2>n3 && n2>n4 && n2>n5 && n2>n6 && n2>n7 && n2>n8 && n2>n9 && n2>n10)
	{
		printf("%d is the largest number ",n2);		
	}
	
	else if(n3>n4 && n3>n5 && n3>n6 && n3>n7 && n3>n8 && n3>n9 && n3>n10)
	{
		printf("%d is the largest number ",n3);		
	}
	
	else if(n4>n5 && n4>n6 && n4>n7 && n4>n8 && n4>n9 && n4>n10)
	{
		printf("%d is the largest number ",n4);
	}
	
	else if( n5>n6 && n5>n7 && n5>n8 && n5>n9 && n5>n10)
	{
		printf("%d is the largest number ",n5);		
	}
	
	else if(  n6>n7 && n6>n8 && n6>n9 && n6>n10)
	{
		printf("%d is the largest number ",n6);		
	}
	else if(  n7>n8 && n7>n9 && n7>n10)
	{
		printf("%d is the largest number ",n7);		
	}
	else if(  n8>n9 && n8>n10)
	{
		printf("%d is the largest number ",n8);		
	}
	else if(  n9>n10)
	{
		printf("%d is the largest number ",n9);		
	}
	else
	{
		printf("%d is the largest number ",n10);		
	}
		if(n1<n2 && n1<n3 && n1<n4 && n1<n5 && n1<n6 && n1<n7 && n1<n8 && n1<n9 && n1<n10)
	{
		printf("%d is the smallest number ",n1);
	}
	
	else if (  n2<n3 && n2<n4 && n2<n5 && n2<n6 && n2<n7 && n2<n8 && n2<n9 && n2<n10)
	{
		printf("%d is the smallest number ",n2);		
	}
	
	else if(n3<n4 && n3<n5 && n3<n6 && n3<n7 && n3<n8 && n3<n9 && n3<n10)
	{
		printf("%d is the smallest number ",n3);		
	}
	
	else if(n4<n5 && n4<n6 && n4<n7 && n4<n8 && n4<n9 && n4<n10)
	{
		printf("%d is the smallest number ",n4);
	}
	
	else if( n5<n6 && n5<n7 && n5<n8 && n5<n9 && n5<n10)
	{
		printf("%d is the smallest number ",n5);		
	}
	
	else if(  n6<n7 && n6<n8 && n6<n9 && n6<n10)
	{
		printf("%d is the smallest number ",n6);		
	}
	else if(  n7<n8 && n7<n9 && n7<n10)
	{
		printf("%d is the smallest number ",n7);		
	}
	else if(  n8<n9 && n8<n10)
	{
		printf("%d is the smallest number " ,n8);		
	}
	else if(  n9<n10)
	{
		printf("%d is the smallest number ",n9);		
	}
	else
	{
		printf("%d is the smallest number ",n10);		
	}
	
}		
