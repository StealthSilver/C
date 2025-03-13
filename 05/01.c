#include <stdio.h>

void recursion(int count)
{
    if (count == 0)
    {
        return;
    }
    printf("hello");
    recursion(count - 1);
}

int main()
{
    recursion(5);
    return 0;
}