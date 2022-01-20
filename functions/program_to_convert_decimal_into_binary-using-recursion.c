#include<stdio.h>
int convert_decimal_into_binary(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return(n%2+10*convert_decimal_into_binary(n/2));
    }

}
void main()
{
    int n,convert_decimal_into_binary_number;
    printf("Enter any number ");
    scanf("%d",&n);
    convert_decimal_into_binary_number=convert_decimal_into_binary(n);
    printf("\n binary equivalent of 10 %d is %d ",n,convert_decimal_into_binary_number);
}