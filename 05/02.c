#include <stdio.h>

int sum(int n)
{

    if (n == 1) // base case
    {
        return 1;
    }

    int sumBefore = sum(n - 1);
    int sumN = sumBefore + n;

    return sumN;
}

int main()
{

    printf("the sum is : %d", sum(10));
}