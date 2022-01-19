#include <stdio.h>
int max_no(int, int);

void main()
{
    int a, b;
    printf("Enter Two Numbers : ");
    scanf("%d %d", &a, &b);
    printf("%d is the laregst number ", max_no(a,b));
}
int max_no(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    return b;
}