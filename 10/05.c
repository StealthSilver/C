#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("test.txt", "w");

    fputc('O', fptr);
    fputc('R', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('E', fptr);

    fclose(fptr);
    return 0;
}