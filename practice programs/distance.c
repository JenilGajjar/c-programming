#include<stdio.h>
void main()
{
	int a,m,i,f,cm;
	
	printf("enter value of a= ");
	scanf("%d",&a);
	m=1000*a;
	printf("%d kilometrer = %d meter \n",a,m);
	f=3.28*m;
	printf("%d kilometer = %d foot \n",a,f);
	i=12*f;
	printf("%d kilometer = %d inches \n",a,i);	
	cm=100*m;
	printf("%d kilometer = %d centimeter \n",a,cm);
	

}
