#include <stdio.h>
int main()
{
    //  1
    // {
    //     for (int n=7; n!=0; n++)
    //     printf("n=%d",n--);
    //     getchar();
    //     return 0;
    // infinite loop 
    // }

    // 2
    // {
    //     int x = 10, *y, **z;
    //     y = &x;
    //     z = &y;
    //     printf("%d %d %d", *y, **z, *(*z));
    // output of this code is 10 10 10
    // }

    // 3
    //  {
    //  int m,i=0,j=1,k=2;
    //  m= i++ || j++ || k++ ;
    //  printf("%d %d %d %d",m,i,j,k);
    //  // output of this code is (1 1 2 2)
    //  }

    // 4
    // {
    //     int a=1,b=2,c=3;
    //     char d=0;
    //     if(a,b,c,d){
    //         printf("entered in the if \n");
    //     }
    //     else{
    //     printf("not entered in if ");
    //     }
    //      output not entered in if
    // }

    // 5
    // {
    //     int i=0;
    //     printf("%d %d",i,i++);
    //     output 1 0
    // }

    // 6
    // {
    //     int val=1;
    //     do
    //     {
    //         val++;
    //         ++val;
    //     } while (val++>25);
    //     printf("%d",val);
    //     output 4
    // }

    // 7
    // {
    //     int i=1;
    //     while (i++<=5);
    //     {
    //         printf("%d",i++);
    //         output 7
    //     }

    // }

    // 8
    //  {
    //      for (int i = 7; i!=0; i--)
    //      {
    //          printf("%d",i--);
    //      }

    // }

    return 0;
}
