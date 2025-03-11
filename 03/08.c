#include <stdio.h>

int main()
{

    int a;

    printf("enter the number : ");
    scanf("%d", &a);

    int product = 1;

    for (int i = 1; i <= a; i++)
    {
        product *= i;
    }

    printf("the product is : %d", product);

    return 0;
}