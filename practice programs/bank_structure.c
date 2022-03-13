#include <stdio.h>
#define N 1
void count_notes(int);
struct bank_info
{
    int act_no;
    char cname[34];
    int balance;
} c[N];
void main()
{
    int i, withdraw;
    for (i = 0; i < N; i++)
    {
        printf("Enter the account number of customer %d ", i + 1);
        scanf("%d", &c[i].act_no);
        printf("Enter the name of the customer ");
        scanf("%s", c[i].cname);
        printf("Enter the balance ");
        scanf("%d", &c[i].balance);
        printf("\n");
    }
    for (i = 0; i < N; i++)
    {
        printf("\nThe account number of customer %d is %d ", i + 1, c[i].act_no);
        printf("\nThe name of the customer is %s ", c[i].cname);
        printf("\nThe balance of customer %d is %d  \n", i + 1, c[i].balance);
    }

    printf("\nEnter withdrawal amount ");
    scanf("%d", &withdraw);
    for (int i = 0; i < N; i++)
    {
        if (withdraw > c[i].balance)
        {
            printf("invalid withdrawal amount ");
        }
        else if (c[i].balance - withdraw < 100)
        {
            printf("Balance is too low can't withdraw ");
        }
        else
        {
            c[i].balance = c[i].balance - withdraw;
            count_notes(withdraw);
            printf("\nBalance after withdrawal : %d ", c[i].balance);
        }
    }
}
void count_notes(int withdraw)
{
    int count_for_2000 = 0, count_for_500 = 0, count_for_100 = 0, count_for_50 = 0, count_for_20 = 0, count_for_10 = 0;
    if (withdraw >= 2000)
    {
        count_for_2000 = withdraw / 2000;
        withdraw = withdraw % 2000;
    }
    if (withdraw >= 500)
    {
        count_for_500 = withdraw / 500;
        withdraw = withdraw % 500;
    }
    if (withdraw >= 100)
    {
        count_for_100 = withdraw / 100;
        withdraw = withdraw % 100;
    }
    if (withdraw >= 50)
    {
        count_for_50 = withdraw / 50;
        withdraw = withdraw % 50;
    }
    if (withdraw >= 20)
    {
        count_for_20 = withdraw / 20;
        withdraw = withdraw % 20;
    }
    if (withdraw >= 10)
    {
        count_for_10 = withdraw / 10;
        withdraw = withdraw % 10;
    }
    printf("\nNotes of 2000 : %d ", count_for_2000);
    printf("\nNotes of 500  : %d ", count_for_500);
    printf("\nNotes of 100  : %d ", count_for_100);
    printf("\nNotes of 50   : %d ", count_for_50);
    printf("\nNotes of 20   : %d ", count_for_20);
    printf("\nNotes of 10   : %d ", count_for_10);
}
