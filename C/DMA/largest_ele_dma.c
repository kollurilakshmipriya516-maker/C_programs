#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    int n, i, max;

    printf("Enter size: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(i = 1; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    printf("Largest = %d\n", max);

    free(arr);

    return 0;
}
