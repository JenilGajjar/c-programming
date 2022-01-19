#include<stdio.h>

void addition_of_n_numbers(int n)
{
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        sum=sum+i;
    }
    printf("\n Submission Of First %d Numbers %d",n,sum);

}
void main()
{
    int n;
    printf("Enter Any Number ");
    scanf("%d",&n);
    addition_of_n_numbers(n);
}