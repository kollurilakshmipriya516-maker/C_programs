#include <stdio.h>
#include <string.h>

int main()
{
    char hex[20];
    int len, i, decimal = 0, value;

    printf("Enter hexadecimal number: ");
    scanf("%s", hex);

    len = strlen(hex);

    for(i = 0; i < len; i++)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
            value = hex[i] - '0';
        else if(hex[i] >= 'A' && hex[i] <= 'F')
            value = hex[i] - 'A' + 10;
        else if(hex[i] >= 'a' && hex[i] <= 'f')
            value = hex[i] - 'a' + 10;
        else
        {
            printf("Invalid Hexadecimal Number\n");
            return 0;
        }

        decimal = decimal * 16 + value;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}
