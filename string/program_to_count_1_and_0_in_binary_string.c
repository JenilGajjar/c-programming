#include<stdio.h>
#define n 100
void count_One_Zero(char str[n]);
void main()
{
    char str[n];
    printf("Enter a string ");
    gets(str);
    count_One_Zero(str);
}   
void count_One_Zero(char str[n])
{   int one=0,zero=0;
    for (int i = 0; i < str[i]!='\0'; i++)
    {
        if(str[i]=='0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    printf("No of 1 : %d \n",one);
    printf("No of 0 : %d \n",zero);
}