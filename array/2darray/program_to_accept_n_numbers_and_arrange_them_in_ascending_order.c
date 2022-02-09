#include <stdio.h>

void main()
{
    int n, j, i, temp;
    printf("Enter any number ");
    scanf("%d", &n);

    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Number %d ", i+1);
        scanf("%d", &array[i]);
    }
    printf("The Elememts of an array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (array[i] > array[j])
            {
                temp=array[j];
                array[j]=array[i];
                array[i]=temp;
            }
        }
    }
    printf("\n ElemeArray in asending order : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", array[i]);
    }
}
