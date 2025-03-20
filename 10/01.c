#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("notes.txt", "r");
    if (fptr == NULL)
    {
        printf("file dosen't exist \n");
    }
    else
    {
        fclose(fptr);
    }
    fclose(fptr);
    return 0;
}