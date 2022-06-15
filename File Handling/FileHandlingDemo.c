#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    // char string[34] = "\nMy name is jenil";

    // ******************Reading a FILE ******************//
    /*
    ptr = fopen("Test.txt", "r");
    fscanf(ptr, "%s", string);
    printf("%s ", string);
    */

    // ******************Writing a FILE ******************
    // ptr = fopen("Test.txt", "a");
    // fprintf(ptr, "%s", string);

    //********************Reading a character from a file Using fgets ********************

    // ptr = fopen("Test.txt", "r");
    // char ch = fgetc(ptr);

    // while (ch != EOF)
    // {
    //     printf("%c", ch);
    //     ch = fgetc(ptr);
    // }

    //******************** Reading a string from a file Using fgets ********************
    // ptr = fopen("Test.txt", "r");
    char str[34];
    // fgets(str, 6, ptr);
    // printf("the string is : \n %s", str);

    //********************writing  a character in a file Using fputs ********************
    // ptr = fopen("Test.txt", "w");
    // fputc('a', ptr);

    //********************writing  a string  in a file Using fputs ********************
    // ptr = fopen("Test.txt", "a");
    // fputs("fun", ptr);

    ptr = fopen("Test.txt", "a+");
    // fputc('a', ptr);
    // fputs("fun", ptr);
    fgets(str, 6, ptr);
    printf("%s", str);
    fclose(ptr);
    return 0;
}