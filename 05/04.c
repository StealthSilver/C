#include <stdio.h>

float cel(float n)
{
    float a = (5.0 / 9.0) * (n - 32);
    return a;
}

int main()
{

    float fen;
    printf("enter the temp in farenheit : \n");
    scanf("%f", &fen);

    printf("the temp in celcius is : %f \n", cel(fen));
}