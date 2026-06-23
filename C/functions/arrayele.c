#include <stdio.h>

int arraySum(int arr[], int size)
{
    int i, sum = 0;

    for(i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Sum = %d\n", arraySum(arr, n));

    return 0;
}
