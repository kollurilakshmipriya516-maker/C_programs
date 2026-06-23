#include <stdio.h>

int main()
{
    int num, digit;
    int sum = 0, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}
