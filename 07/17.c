// Function to insert an element at the end

#include <stdio.h>

void insertAtEnd(int arr[], int *size, int element, int capacity)
{
    if (*size >= capacity)
    {
        printf("Array is full. Cannot insert new element.\n");
        return;
    }

    arr[*size] = element;
    (*size)++;
}

void printArray(int arr[], int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int capacity = 10;
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int element;

    printf("Original ");
    printArray(arr, size);

    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);

    insertAtEnd(arr, &size, element, capacity);

    printf("Updated ");
    printArray(arr, size);

    return 0;
}
