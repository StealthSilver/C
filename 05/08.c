
// Function to calculate the sum of digits of a number

#include <stdio.h>

int sumOfDigits(int num)
{
    int sum = 0;

    if (num < 0)
    {
        num = -num;
    }

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Sum of digits: %d\n", sumOfDigits(number));

    return 0;
}
