#include <stdio.h>

int main()
{
    int num, search, digit;
    int count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter digit to search: ");
    scanf("%d", &search);

    while(num != 0)
    {
        digit = num % 10;

        if(digit == search)
            count++;

        num /= 10;
    }

    printf("Occurrence of %d = %d\n", search, count);

    return 0;
}
