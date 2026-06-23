#include <stdio.h>

int main()
{
    int a[20][20];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Matrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
