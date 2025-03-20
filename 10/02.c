#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("notes.txt", "r");

    char ch;
    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fscanf(fptr, "%c", &ch);
    printf("character = %c\n", ch);

    fclose(fptr);
    return 0;
}