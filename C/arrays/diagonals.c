#include <stdio.h>

int main()
{
    int a[20][20];
    int n, i, j;

    printf("Enter order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Primary Diagonal: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i][i]);
    }

    printf("\nSecondary Diagonal: ");

    for(i = 0; i < n; i++)
    {
        printf("%d ", a[i][n - 1 - i]);
    }

    printf("\n");

    return 0;
}
