#include<stdio.h>
#include<math.h>

void main()
{
	float a,b,c,d,x,y;
	
	printf("enter value of a \n");
	scanf("%f",&a);
	
	printf("enter value of b \n");
	scanf("%f",&b);
	
	printf("enter value of c \n");
	scanf("%f",&c);
	
	d=(b*b)-(4*a*c);
	
	if(d>0)
	{
			x=(-b+sqrt(d))/2*a;
			y=(-b-sqrt(d))/2*a;
			printf("x=%.f \n",x);
			printf("y=%.f ",y);

	}
	
	if(d==0)
	{
		x=y=-b/(2*a);
		printf("root is %.f ",x);
	}
	
	if(d<0)
	{	
		printf("%.f+%.fi \n",-b/(2*a),sqrt(-d)/(2*a));
		printf("%.f-%.fi",-b/(2*a),sqrt(-d)/(2*a));
	}
 } 
