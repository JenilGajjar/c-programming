#include <stdio.h>
void swap(int *a, int *b);

int main()
{
    int a, b,*ptr1,*ptr2;
    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);

    ptr1=&a;
    ptr2=&b;
    printf("Value of a before swap a : %d \n Value of a before swap b : %d \n", a,b);

    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("Value of a after swap a : %d \n Value of a after swap b : %d \n", a,b);
    return 0;
}
