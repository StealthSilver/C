// printing prime numebrs in a given range

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num)
{
    if (num < 2)
        return 0; // Numbers less than 2 are not prime

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0; // If divisible, it's not prime
    }
    return 1; // Prime number
}

int main()
{
    int start, end;

    // Input from user
    printf("Enter the start of the range: ");
    scanf("%d", &start);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    // Ensure valid range
    if (start > end)
    {
        printf("Invalid range! Start should be less than or equal to End.\n");
        return 1;
    }

    printf("Prime numbers between %d and %d are: ", start, end);

    // Loop through range and print prime numbers
    for (int i = start; i <= end; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
