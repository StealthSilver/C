// check a number is prime or not

#include <stdio.h>

int main()
{
    int num, i, isPrime = 1;

    // Input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Edge case: Numbers less than 2 are not prime
    if (num < 2)
    {
        printf("%d is not a prime number.\n", num);
        return 0;
    }

    // Check divisibility from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    // Print result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
