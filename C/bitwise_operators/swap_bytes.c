#include <stdio.h>

int main()
{
    unsigned short num, result;

    printf("Enter hexadecimal number: ");
    scanf("%hx", &num);

    result = (num >> 8) | (num << 8);

    printf("After swapping bytes = 0x%04X\n", result);

    return 0;
}
