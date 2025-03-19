
// Function to find the largest number in an array

#include <stdio.h>

int findLargest(int arr[], int size)
{
    int max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int largest = findLargest(arr, n);
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
