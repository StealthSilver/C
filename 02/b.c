#include <stdio.h>

int main()
{

    char light = 'r';

    if (light == 'r')
    {
        printf("red light : stop");
    }
    else if (light == 'y')
    {
        printf("yellow light : wait");
    }
    else
    {
        printf("green light : go")
    }
    return 0;
}