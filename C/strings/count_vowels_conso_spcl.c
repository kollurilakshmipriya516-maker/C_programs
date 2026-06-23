#include <stdio.h>

int main()
{
    char str[100];
    int i, upper=0, lower=0, special=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
            upper++;
        else if(str[i]>='a' && str[i]<='z')
            lower++;
        else if(str[i]!=' ' && str[i]!='\n')
            special++;
    }

    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d\n", lower);
    printf("Special Characters = %d\n", special);

    return 0;
}
