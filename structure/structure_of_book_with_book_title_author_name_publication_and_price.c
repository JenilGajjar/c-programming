#include <stdio.h>
struct date_of_publication
{

    int d;
    int m;
    int y;
};

struct details_of_book
{
    char book_name[34];
    char author_name[34];
    float price;
    struct date_of_publication publication_date;
};

void main()
{
    int n, i;
    printf("Enter numbers of books ");
    scanf("%d", &n);
    struct details_of_book book[n];
    for (i = 0; i <n; i++)
    {
        printf("\nEnter the name of the book ");
        gets(book[i].book_name);
        // printf("Enter price of the book ");
        // scanf("%f", &book[i].price);
        // printf("Enter the date of publication ");
        // scanf("%d", &book[i].publication_date.d);
        // printf("Enter the month of publication ");
        // scanf("%d", &book[i].publication_date.m);
        // printf("Enter the year of publication ");
        // scanf("%d", &book[i].publication_date.y);

    }
    for ( i = 0; i < n; i++)
    {
        printf("\n");
        printf("The name of the book is %s \n",book[i].book_name);
        // printf("The price of the book is %.2f \n", book[i].price);
        // printf("The date of publication %d/%d/%d \n", book[i].publication_date.d, book[i].publication_date.m, book[i].publication_date.y);
    }
    
}