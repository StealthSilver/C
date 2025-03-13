#include <stdio.h>

void recursion()
{
    printf("hello");
    recursion();
}

int main()
{
    recursion();
    return 0;
}