#include<stdio.h>
#include<string.h>
int main()
{
    
    char str1[20],str2[20],str3[20];
    printf("Enter Three Strings \n ");
    gets(str1);
    gets(str2);
    gets(str3); 
    printf(" String1: %s \n String2: %s \n  string3 : %s ",str1,str2,str3);
    // printf(" The Length Of String 1 : %d \n",strlen(str1));
    // printf(" The Length Of String 2 : %d \n",strlen(str2));
    // printf(" The Length Of String 3 : %d \n",strlen(str3));
    // printf(" The Reverse of String 1 : %s \n",strrev(str1));
    // printf(" The Reverse Of String 2:");
    // puts(strrev(str2));
    // printf(" The Reverse Of String 3:");
    // puts(strrev(str3));
    // puts(strcat(str1,str2));
    // puts(strcat(str1,str2));
    // strcpy(str3,strcat(str1,str2));
    // printf("String 3:");
    // puts(str3);
    printf("The strcmp for str1 and str2 Returened %d",strcmp(str1,str2));
    return 0;

}