#include <stdio.h>

int main()
{
    unsigned int num;
    int p1, p2;
    unsigned int bit1, bit2;

    printf("Enter number: ");
    scanf("%u", &num);

    printf("Enter two bit positions: ");
    scanf("%d%d", &p1, &p2);

    bit1 = (num >> p1) & 1;
    bit2 = (num >> p2) & 1;

    if(bit1 != bit2)
        num ^= (1 << p1) | (1 << p2);

    printf("Result = %u\n", num);

    return 0;
}
