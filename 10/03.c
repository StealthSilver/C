#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fclose(fptr);
    printf("Data written successfully to test.txt\n");

    return 0;
}
