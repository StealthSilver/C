// code to check is a numebr is armstong number or not

#include <stdio.h>
#include <math.h>

int main()
{
    int num, d1, d2, d3, result;

    // Input from user
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    // Ensure it's a 3-digit number
    if (num >= 100 && num <= 999)
    {
        // Extract digits
        d1 = num / 100;       // First digit
        d2 = (num / 10) % 10; // Second digit
        d3 = num % 10;        // Third digit

        // Calculate Armstrong sum
        result = pow(d1, 3) + pow(d2, 3) + pow(d3, 3);

        // Check Armstrong condition
        if (result == num)
            printf("%d is an Armstrong number.\n", num);
        else
            printf("%d is not an Armstrong number.\n", num);
    }
    else
    {
        printf("Please enter a valid 3-digit number.\n");
    }

    return 0;
}
