#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p1, *p2;
    int i;

    p1 = (int *)malloc(5 * sizeof(int));
    p2 = (int *)calloc(5, sizeof(int));

    printf("calloc values:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", p2[i]);
    }

    free(p1);
    free(p2);

    return 0;
}
