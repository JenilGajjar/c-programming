#include <stdio.h>
void convert_into_uppercae(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("\n String in upper case : %s \n", str);
}
void main()
{
    char str[100];
    printf("Enter a string ");
    gets(str);
    convert_into_uppercae(str);
}