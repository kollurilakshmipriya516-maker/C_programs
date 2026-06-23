#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *str;

    str = (char *)malloc(50 * sizeof(char));

    printf("Enter a string: ");
    scanf("%s", str);

    printf("String = %s\n", str);

    free(str);

    return 0;
}
