#include <stdio.h>
#include <math.h>
int covertBinaryToDecimal(int);
void convrtDecimalToHexadecimalAndOcatl(int, int);
void main()
{
    int num;
    printf("Enter a binary number ");
    scanf("%d", &num);
    int dec = covertBinaryToDecimal(num);
    printf("\nNumber in decimal %d", dec);
    printf("\nnumber in octal :");
    convrtDecimalToHexadecimalAndOcatl(dec, 8);
    printf("\nnumber in hexadecimal :");
    convrtDecimalToHexadecimalAndOcatl(dec, 16);
}
int covertBinaryToDecimal(int n)
{
    int dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
void convrtDecimalToHexadecimalAndOcatl(int n, int base)
{
    int rem = n % base;
    if (n == 0)
    {
        return;
    }
    convrtDecimalToHexadecimalAndOcatl(n / base, base);
    if (rem < 10)
    {
        printf("%d", rem);
    }
    else
    {
        printf("%c", rem - 10 + 'A');
    }
}