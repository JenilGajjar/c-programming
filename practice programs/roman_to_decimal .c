#include <stdio.h>
#define N 1000
void main()
{
    int dec = 0;
    char str[N];
    printf("Enter number roman ");
    scanf("%s", str);
    printf("the given roman number is ");
    for (int i = 0; i < str[i] != '\0'; i++)
    {
        if (str[i] == 'm')
        {
            dec = dec + 1000;
        }
        else if (str[i] == 'cm')
        {
            dec = dec + 900;
        }
        else if (str[i] == 'd')
        {
            dec = dec + 500;
        }
        else if (str[i] == 'c')
        {
            dec = dec + 100;
        }
        else if (str[i] == 'l')
        {
            dec = dec = 50;
        }
        else if (str[i] == 'xl')
        {
            dec = dec + 40;
        }
        else if (str[i] == 'x')
        {
            dec = dec + 10;
        }
        else if (str[i] == 'ix')
        {
            dec = dec + 9;
        }
        else if (str[i] == 'v')
        {
            dec = dec + 5;
        }
        else if (str[i] == 'iv')
        {
            dec = dec + 4;
        }
        else if (str[i] == 'i')
        {
            dec = dec + 1;
        }
    }
    printf("%d",dec);
}