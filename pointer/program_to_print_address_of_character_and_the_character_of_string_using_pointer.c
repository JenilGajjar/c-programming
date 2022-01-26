// &array[i]=array+i
// array[i]=*(array+i)
#include <stdio.h>
void main()
{
    char str[30], *ptr;
    ptr = str;
    // scaning a string icluding white space
    gets(str);
    // scanf("%[^\n]%*c", str); optional
    // scanf("%[^\n]%*c", ptr); optional
    printf("The given String is : ");

    for (int i = 0; str[i] != '\0'; i++)
    {
        //  printing the given string;
        printf("%c", *(ptr + i)); 
        // printf("%c", *(str + i)); optional
        // printf("%c", str[i]); optional
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        // printing the location of each character
        printf("\n The location of %c is %d ", *(ptr + i), ptr + i); 
        // printf("\n The location of %c is %d ", *(str + i), str + i); optional 
        // printf("\n The location of %c is %d ", str[i],&str[i]);  optional
    }
}