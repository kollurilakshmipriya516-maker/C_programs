#include <stdio.h>

int main()
{
    int num, rem, i = 0;
    char hex[20];

    printf("Enter decimal number: ");
    scanf("%d", &num);

    if(num == 0)
    {
        printf("Hexadecimal = 0\n");
        return 0;
    }

    while(num > 0)
    {
        rem = num % 16;

        if(rem < 10)
            hex[i++] = rem + '0';
        else
            hex[i++] = rem + 55; // A-F

        num /= 16;
    }

    printf("Hexadecimal = ");

    while(i > 0)
    {
        printf("%c", hex[--i]);
    }

    printf("\n");

    return 0;
}
