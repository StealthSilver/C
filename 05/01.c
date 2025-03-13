#include <stdio.h>

void recursion(int count) // recursive function
{
    if (count == 0)
    {
        return;
    }
    printf("hello \n");
    recursion(count - 1);
}

int main()
{
    recursion(5);
    return 0;
}