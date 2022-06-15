#include <stdio.h>
#include <stdlib.h>
void main()
{
    printf("Enter the size of an array you want to create\n");
    int n;
    scanf("%d", &n);
    // use of malloc
    // int *ptr;
    // ptr = (int *)malloc(n * sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    //     printf("enter the number at %d ", i);
    //     scanf("%d", &ptr[i]); //  &ptr[i] and ptr + i are same
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d\n", ptr[i]); //  ptr[i] and *(ptr + i) are same
    // }

    // use of calloc

    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value at %d in array ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value at %d in array id %d\n", i, ptr[i]);
    }

    // use of realloc
    printf("Enter the new size of the array");
    scanf("%d", &n);

    ptr = (int *)realloc(ptr, n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the new value at %d in array ", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The new value at %d in array id %d\n", i, ptr[i]);
    }
    free(ptr);
}