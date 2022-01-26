#include<stdio.h.>
void main()
{
	float a,hra,bs,gs,da;
	
	printf("enter basic salary ");
	
	scanf("%f",&a);
	
	if (a<10000)
	{
		printf("invalid input");
	}
	
	else if( a>=10000 , a<20000 )
	{
	bs=a;
	hra=(bs*20)/100;
	da=(bs*80)/100;
	gs=bs+hra+da;
	printf("gross salary =%.f",gs);	
	}	
	
	else if( a>=20000 , a<30000)
	{
	bs=a;
	hra=(bs*25)/100;
	da=(bs*90)/100;
	gs=(bs+hra+da);
	printf("gross salary =%.f",gs);	
	}
	
	if( a>=30000)
	{
	bs=a;
	hra=(bs*30)/100;
	da=(bs*95)/100;
	gs=bs+hra+da;
	printf("gross salary =%.f",gs);	
	}
	
	
}
