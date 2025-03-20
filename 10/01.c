#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("Test.txt", "r");
    fclose(fptr);
    return 0;
}