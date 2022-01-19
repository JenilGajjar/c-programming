#include <stdio.h>
int factorial(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
void main()
{
    int n, facto;
    printf("Enter Any Number ");
    scanf("%d", n);
    facto = factorial(n);
    printf("Factorial Of %d is %d ",n,facto);
}