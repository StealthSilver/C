#include <stdio.h>

void calculatePrice(float value)
{
    value = value + (0.18 * value);
    printf("final price is : %f \n", value);
}

int main()
{
    float value = 100.0;
    calculatePrice(value);
    printf("value is : %f", value);
    return 0;
}
