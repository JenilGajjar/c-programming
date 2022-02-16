#include <stdio.h>
void main()
{
    char str[10];
    printf("enter date in dd/mm/yyyy format ");
    scanf("%s", str);
    // 11/11/2020
    if (str[3] == '0')
    {
        switch (str[4])
        {
        case '1':
        {
            printf("Jan. ");
            break;
        }
        case '2':
        {
            printf("Feb. ");
            break;
        }
        case '3':
        {
            printf("March ");
            break;
        }
        case '4':
        {
            printf("April ");
            break;
        }
        case '5':
        {
            printf("May ");
            break;
        }
        case '6':
        {
            printf("June ");
            break;
        }
        case '7':
        {
            printf("July ");
            break;
        }
        case '8':
        {
            printf("Aug. ");
            break;
        }
        default:
        {
            printf("Sep. ");
            break;
        }
        }
    }
    else if (str[3] == '1')
    {
        switch (str[4])
        {
        case '0':
        {
            printf("Oct. ");
            break;
        }
        case '1':
        {
            printf("Nov. ");
            break;
        }
        default:
        {
            printf("Dec. ");
            break;
        }
        }
    }
    printf(" %c%c, %c%c%c%c ", str[0],str[1],str[6],str[7],str[8],str[9]);
}