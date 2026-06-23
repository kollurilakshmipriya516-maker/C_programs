#include <stdio.h>

int main()
{
    unsigned int num;
    int bits = 0;

    printf("Enter a number: ");
    scanf("%u", &num);

    while(num)
    {
        bits++;
        num >>= 1;
    }

    printf("Minimum bits required = %d\n", bits);

    return 0;
}
