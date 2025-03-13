#include <stdio.h>

int sum(int x, int y) // these are formal parameters / parameters
{
    return x + y;
}

int main()
{

    int a, b;

    printf("enter the first number : ");
    scanf("%d", &a);

    printf("enter the second number : ");
    scanf("%d", &b);

    int ans = sum(a, b); // these are the arguments
    printf("Sum is : %d", ans);
    return 0;
}