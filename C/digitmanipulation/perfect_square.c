#include <stdio.h>

int main()
{
    int num, i;
    int flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i * i <= num; i++)
    {
        if(i * i == num)
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("Perfect Square\n");
    else
        printf("Not a Perfect Square\n");

    return 0;
}
