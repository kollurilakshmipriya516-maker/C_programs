#include <stdio.h>

int main()
{
    long long octal;
    int decimal = 0, base = 1, rem;

    printf("Enter octal number: ");
    scanf("%lld", &octal);

    while(octal > 0)
    {
        rem = octal % 10;
        decimal += rem * base;
        base *= 8;
        octal /= 10;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}
