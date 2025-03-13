#include <stdio.h>

int percent(int x, int y, int z)
{
    return (x + y + z / 100) * 3;
}

int main()
{
    int a, b, c;
    printf("the percentage is %d", percent(a, b, c));
}