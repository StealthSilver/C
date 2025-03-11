#include <stdio.h>
#include <math.h> // header file for mathematical functions

int main()
{
    int b, c;
    b = c = 2;
    int a = 5;
    int power = pow(a, b);

    printf("%d \n", power);

    int mod = a % b;
    printf("%d", mod);
    return 0;
}