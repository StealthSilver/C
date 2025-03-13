#include <stdio.h>

int factorial(int a)
{

    if (a == 1)
    {
        return 1;
    }

    int factBefore = factorial(a - 1);

    int factN = factBefore * a;

    return factN;
}

int main()
{

    printf("the factorial is : %d", factorial(5));

    return 0;
}