#include <stdio.h>

int main()
{
    int a[20][20];
    int r, c, i, j;
    int sum = 0;
    long long product = 1;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);

            sum += a[i][j];
            product *= a[i][j];
        }
    }

    printf("Sum = %d\n", sum);
    printf("Product = %lld\n", product);

    return 0;
}
