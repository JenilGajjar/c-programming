#include <stdio.h>
#define n 100
void function(char str[n])
{
    int j, k;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[j] >= '0' && str[j] <= '9')
                for (k = 0; k <= str[j]; k++)
                {
                    printf("%c", str[i]);
                }
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
