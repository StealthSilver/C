// memory reallocation

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;

    arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 5; i++)
    {
        arr[i] = 2 * i + 1;
    }

    printf("First 5 odd numbers: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    arr = (int *)realloc(arr, 6 * sizeof(int));

    if (arr == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    for (int i = 0; i < 6; i++)
    {
        arr[i] = 2 * (i + 1);
    }

    printf("First 6 even numbers: ");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
