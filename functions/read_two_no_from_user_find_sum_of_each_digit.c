#include <stdio.h>
int sum_Of_Digit(int);
int large_No(int, int);
void main()
{
    int n1, n2, a, b,temp;
    printf("Enter two no ");
    scanf("%d %d", &n1, &n2);
    a = sum_Of_Digit(n1);
    b = sum_Of_Digit(n2);
    printf("Sum 0f each digit of %d is %d \n", n1, a);
    printf("Sum 0f each digit of %d is %d \n", n2, b);
    temp=large_No(n1,n2);
    printf("largest no from given 2 no. accoring to their sum of each digit is %d",temp);
}
int sum_Of_Digit(int n)
{
    int i, sum = 0;
    while (n != 0)
    {
        i = n % 10;
        n = n / 10;
        sum = sum + i;
    }
    return sum;
}
int large_No(int a, int b)
{
    if (sum_Of_Digit(a) > sum_Of_Digit(b))
    {
        return a;
    }
    else if (sum_Of_Digit(a)==sum_Of_Digit(b))
    {
        return -1;
    }
    return b;
}