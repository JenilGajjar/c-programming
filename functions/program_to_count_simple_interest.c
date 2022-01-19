#include<stdio.h>
void countsimpleinterst(int p,int r,float n);
void main()
{
    int p,r;
    float n,temp;
    printf("Enter Value Of p : ");
    scanf("%d",&p);
    printf("Enter Value Of r : ");
    scanf("%d",&r);
    printf("Enter Value Of n : ");
    scanf("%f",&n);
    countsimpleinterst(p,r,n);      
}
void countsimpleinterst(int p,int r,float n)
{
    float i;
    i=(p*r*n)/100;
    printf("\n Simple Interst I : %.2f \n ",i);
}
