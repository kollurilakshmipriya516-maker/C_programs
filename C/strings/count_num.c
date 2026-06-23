#include <stdio.h>

int main()
{
    char str[100];
    int digits = 0, spaces = 0;
    int alphabets = 0, special = 0, i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if((str[i] >= 'A' && str[i] <= 'Z') ||
           (str[i] >= 'a' && str[i] <= 'z'))
        {
            alphabets++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digits++;
        }
        else if(str[i] == ' ')
        {
            spaces++;
        }
        else if(str[i] != '\n')
        {
            special++;
        }
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Spaces = %d\n", spaces);
    printf("Special Characters = %d\n", special);

    return 0;
}
