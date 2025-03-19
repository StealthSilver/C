#include <stdio.h>

void printAddress(int *n);

int main()
{
    int n = 4;

    printAddress(&n);
    printf("Address of n in main: %p\n", (void *)&n);

    return 0;
}

void printAddress(int *n)
{
    printf("Address of n inside printAddress: %p\n", (void *)n);
}
