#include <stdio.h>

int main()
{
    char str[100];
    int len = 0, i;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while(str[len] != '\0')
        len++;

    len--;

    if(str[len] == '\n')
        len--;

    for(i = 0; i < (len + 1) / 2; i++)
    {
        temp = str[i];
        str[i] = str[len - i];
        str[len - i] = temp;
    }

    printf("Reversed String = %s\n", str);

    return 0;
}
