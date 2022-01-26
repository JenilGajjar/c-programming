#include <stdio.h>
void main()
{
    int n, sum = 0, i;
    printf("Enter any Number ");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d term ", i+1);
        scanf("%d", array+i);
    }
    for (i = 0; i < n; i++)
    {
        printf("Value of Array[%d] is %d\n",i,*(array+i));
    }
    for (i = 0; i < n; i++)
    {
        // &array[i]=array+i or array[i]=*(aaray+i)
        sum = sum + *(array + i);
    }
    printf("Sum of Given %d Numbers %d ", n, sum);
    
}