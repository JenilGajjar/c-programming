#include <stdio.h>
void fibbo(int n)
{
    int a = 0, b = 1, sum;
    printf("%d\t", b);
    for (int i = 1; i <= n - 1; i++)
    {
        sum = a + b;
        printf("%d\t", sum);
        a = b;
        b = sum;
    }
    printf("\n");
}
void main()
{
    int n;
    printf("Enter Any Number ");
    scanf("%d", &n);
    fibbo(n);
}
