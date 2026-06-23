#include <stdio.h>

int sum(int a, int b)
{
    return a + b;
}

float average(int a, int b)
{
    return (a + b) / 2.0;
}

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Sum = %d\n", sum(a, b));
    printf("Average = %.2f\n", average(a, b));

    return 0;
}
