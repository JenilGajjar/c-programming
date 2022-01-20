#include <stdio.h>
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return(n*factorial(n-1));
    
}
void main()
{
    int n,fact;
    printf("Enter Any Number ");
    scanf("%d", &n);
    fact=factorial(n);
    printf("\n Factorial of %d is %d ",n,fact);
}
