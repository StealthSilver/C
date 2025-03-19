// function to print first n fibonacci numbers

#include <stdio.h>
#include <stdlib.h>

void generateFibonacci(int *fib, int n)
{
    if (n > 0)
        fib[0] = 0;
    if (n > 1)
        fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;

    printf("Enter the number of Fibonacci numbers: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    int *fib = (int *)malloc(n * sizeof(int));

    if (fib == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    generateFibonacci(fib, n);

    printf("First %d Fibonacci numbers: ", n);
    printArray(fib, n);

    free(fib);

    return 0;
}
