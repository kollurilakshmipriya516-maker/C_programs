#include <stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='A'&&str[i]<='Z') ||
           (str[i]>='a'&&str[i]<='z'))
        {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
               str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
                str[i]='*';
            else
                str[i]='#';
        }
    }

    printf("Modified String = %s", str);

    return 0;
}
