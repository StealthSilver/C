#include <stdio.h>

int main()
{

    int num = -32;

    if (num >= 0)
    {
        if (num % 2 == 0)
        {
            printf("number is even \n");
        }
        else
        {
            printf("number is odd \n");
        }
    }
    else
    {
        printf("number is negative \n");
    }

    return 0;
}