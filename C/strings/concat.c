#include <stdio.h>

int main()
{
    char str1[200], str2[100];
    int i, j;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0'; i++);

    i--;

    for(j = 0; str2[j] != '\0'; j++)
    {
        str1[i++] = str2[j];
    }

    str1[i] = '\0';

    printf("Concatenated String = %s", str1);

    return 0;
}
