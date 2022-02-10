#include <stdio.h>
#include <string.h>
#define n 100
void function(char str[n])
{
    int i, j;
    for (i = 0; str[i] != '\0'; i += 2)
    {
        for (j = 0; j < str[i + 1] - '0'; j++)
        {
            printf("%c", str[i]);
        }
    }
}
void main()
{
    char str[n];
    printf("Enter a string ");
    gets(str);
    function(str);
}
