#include <stdio.h>

int main()
{
    unsigned char num, result;

    printf("Enter hex byte: ");
    scanf("%hhx", &num);

    result = (num << 4) | (num >> 4);

    printf("After swapping nibbles = 0x%X\n", result);

    return 0;
}
