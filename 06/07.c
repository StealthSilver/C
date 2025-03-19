// swapping function

#include <stdio.h>

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;

    printf("a = %d & b = %d", a, b);
}

int main()
{

    int x = 3, y = 5;

    swap(x, y);
    printf("a = %d & b = %d", x, y);

    return 0;
}