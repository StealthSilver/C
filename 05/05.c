#include <stdio.h>

float percent(float x, float y, float z)
{
    return ((x + y + z) / 3.0);
}

int main()
{
    float a = 90;
    float b = 30;
    float c = 80;

    printf("The percentage is: %.2f%%\n", percent(a, b, c));
    return 0;
}
