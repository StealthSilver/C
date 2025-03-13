#include <stdio.h>

int AreaSquare(int a)
{
    return a * a;
}

float AreaCircle(float r)
{
    return 3.14 * r * r;
}

int AreaRectangle(int x, int y)
{
    return x * y;
}

int main()
{

    int side = 4;
    float radius = 3;
    int length = 12;
    int bredth = 6;

    printf("%d \n", AreaSquare(side));
    printf("%f \n", AreaCircle(radius));
    printf("%d \n", AreaRectangle(length, bredth));
    return 0;
}