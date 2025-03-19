#include <stdio.h>

int main()
{
    int n = 4;

    printAddress(n);
    printf("address of n is : %u\n", &n);

    return 0;
}

void printAddress(int n)
{
    printf("%p\n", &n);
}