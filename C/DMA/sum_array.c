#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, sum = 0;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum = %d\n", sum);

    free(arr);

    return 0;
}
