// Function to count occurrences of x in the array

#include <stdio.h>

int countOccurrences(int arr[], int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n, x;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to count: ");
    scanf("%d", &x);

    int count = countOccurrences(arr, n, x);

    printf("The number %d appears %d times in the array.\n", x, count);

    return 0;
}
