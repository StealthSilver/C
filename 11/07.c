#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;

    arr = (int *)calloc(5, sizeof(int));

    if (arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("You entered: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
