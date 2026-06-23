#include <stdio.h>
#include <math.h>

int main()
{
    float num;

    printf("Enter a number: ");
    scanf("%f", &num);

    printf("Floor value = %.0f\n", floor(num));
    printf("Ceil value = %.0f\n", ceil(num));

    return 0;
}
