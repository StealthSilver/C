#include <stdio.h>

int main()
{

    int n = 4;
    printf("%p\n", &n);
    printAddress(n);

    return 0;
}

void printAddress(int n)
{
    printf("%p\n", &n);
}