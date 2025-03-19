#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello, World!";

    int length = strlen(str); // Count characters excluding '\0'

    printf("Length of the string: %d\n", length);

    return 0;
}
