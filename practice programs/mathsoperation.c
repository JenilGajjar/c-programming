#include<stdio.h>
void main()
{
	float a,b,c,add,sub,mul,div;
	
	
 	printf("enter value of a= \n");
 	scanf("%f",&a);
 	
 	printf("enter value of b= \n");
	scanf("%f",&b);
	 	
  	printf("press 1 for addtion \n");
	printf("press 2 for subtraction \n");
	printf("press 3 for multiplication \n");
	printf("press 4 for divtion \n");  	
	
	printf("enter value = \n");
	scanf("%f",&c);
	
		 if (c==1)
			{
			add=a+b;
			printf("addition is =%.2f",add);
	}
		 if (c==2)

					{
							sub=a-b;
			printf("substraction=%.2f",sub);
	}
		 if (c==3)
	{
			mul=a*b;
			printf("multiplicatioan=%.2f",a*b);
	}
		 if (c==4)
	{
					div=a/b;
			printf("divistion=%.2f",div);
}
	      if(c>4)
			printf("invalid input");	
        

}



