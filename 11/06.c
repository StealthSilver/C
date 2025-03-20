#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;

    ptr = (int *)calloc(5, sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 5 numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    ptr = realloc(ptr, 8 * sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    printf("Enter 3 more numbers: ");
    for (int i = 5; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    printf("Numbers entered:\n");
    for (int i = 0; i < 8; i++)
    {
        printf("Number %d is %d\n", i + 1, ptr[i]);
    }

    free(ptr);

    return 0;
}
