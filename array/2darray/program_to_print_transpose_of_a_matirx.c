#include <stdio.h>
void main()
{
    int n, i, j;

    printf("Enter Any Number ");
    scanf("%d", &n);

    int matrix[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter Value Of a[%d][%d] ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n Matix : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\n Transpose Of The Matrix : \n ");
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }
}