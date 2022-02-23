#include<stdio.h>
#define N 100
void stringCopy(char str_1[N],char str_2[N])
{
    printf("The copied string is ");
    for (int i = 0; str_1[i]!='\0'; i++)
    {
        str_2[i]=str_1[i];
        printf("%c",str_2[i]);
    }
}
int stringLength(char str[N])
{
    int l=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        l++;
    }
    return l;    
}
void stringRev(char str[N])
{
    int l= stringLength(str);
    char str_2[N];
    printf("\n the reversed string is ");
    for (int i = l-1; str[i]!=str[-1]; i--)
    {
        printf("%c",str[i]);
    }
    
}
void main()
{
    int n;
    char str[N],str_2[N];
    printf("Enter a string ");
    gets(str);
    printf("Enter 1 to copy a string ");
    printf("\n Enter 2 find the lenth of the string ");
    printf("\n Enter 3 to print string in reverse \n ");
    scanf("%d",&n);
    if(n==1)
    {
        stringCopy(str,str_2);
    }
    else if (n==2)
    {
        int l = stringLength(str);
        printf("The length of the string is %d ",l);
    }
    else if (n==3)
    {
        stringRev(str);
    }
    else
    {
        printf("\n invalid input ");
    }
    
    
}