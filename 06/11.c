#include <stdio.h>

void printReverse(int *arr, int size)
{
    printf("Array in reverse order: ");
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printReverse(arr, n);

    return 0;
}
