#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Words:\n");

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            printf("\n");
        else
            printf("%c", str[i]);
    }

    return 0;
}
