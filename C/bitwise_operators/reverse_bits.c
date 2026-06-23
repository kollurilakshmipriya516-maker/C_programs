#include <stdio.h>

int main()
{
    unsigned int num, rev = 0;
    int i;

    printf("Enter number: ");
    scanf("%u", &num);

    for(i = 0; i < 32; i++)
    {
        rev <<= 1;
        rev |= (num & 1);
        num >>= 1;
    }

    printf("Reversed Number = %u\n", rev);

    return 0;
}
