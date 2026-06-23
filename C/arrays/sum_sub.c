#include <stdio.h>

int main()
{
    int a[20][20], b[20][20];
    int sum[20][20], sub[20][20];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter Matrix A:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Matrix B:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nAddition Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%4d", sum[i][j]);
        }
        printf("\n");
    }

    printf("\nSubtraction Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%4d", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
