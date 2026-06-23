#include <stdio.h>

void table(int num)
{
    int i;

    for(i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    table(num);

    return 0;
}
