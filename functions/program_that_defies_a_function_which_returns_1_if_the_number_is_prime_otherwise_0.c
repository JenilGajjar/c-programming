#include <stdio.h>
int primality_test_of_an_integer(int);

void main()
{
    int n, tmp;
    printf("Enter Any Number ");
    scanf("%d", &n);
    tmp = primality_test_of_an_integer(n);
    printf("%d", tmp);
}

int primality_test_of_an_integer(int n)
{
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("The given number is not a prime number.\n");
            return 0;
        }
        printf("The given number is a prime number \n");
        return 1;
    }
}