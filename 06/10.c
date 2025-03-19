// max of two numbers

#include <stdio.h>

void findMax(int *a, int *b, int *max)
{
    *max = (*a > *b) ? *a : *b;
}

int main()
{
    int num1, num2, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    findMax(&num1, &num2, &max);

    printf("The maximum number is: %d\n", max);

    return 0;
}
