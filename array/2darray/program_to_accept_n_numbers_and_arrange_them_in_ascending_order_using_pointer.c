#include <stdio.h>

void main()
{
    int n, j, i, temp,*ptr;
    printf("Enter any number ");
    scanf("%d", &n);

    int array[n];
    ptr=array;
    for (i = 0; i < n; i++)
    {
        printf("Enter Number  %d ", i+1);
        scanf("%d", ptr+i);
    }
    printf("The Elememts of an array : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr+i));
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr+i) > *(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    printf("\n ElemeArray in asending order : ");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", *(ptr+i));
    }
}
