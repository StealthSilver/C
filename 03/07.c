#include <stdio.h>

int main()
{

    int a;

    printf("enter the number : ");
    scanf("%d", &a);

    int sum = 0;

    for (int i = 0; i <= a; i++)
    {
        sum += i;
    }

    printf("the sum is : %d", sum);

    return 0;
}