// code for the implementation of power function

#include <stdio.h>

int power(int base, int exponent)
{

    if (exponent == 0)
        return 1;

    return base * power(base, exponent - 1);
}

int main()
{
    int base, exponent;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    printf("%d^%d = %d\n", base, exponent, power(base, exponent));

    return 0;
}
