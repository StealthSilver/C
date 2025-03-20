// storing the odd numebrs in a file

#include <stdio.h>

int main()
{
    FILE *fptr;
    int n;

    fptr = fopen("Number.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2)
    {
        fprintf(fptr, "%d\n", i);
    }

    fclose(fptr);

    printf("Odd numbers from 1 to %d have been written to Number.txt\n", n);

    return 0;
}
