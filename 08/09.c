#include <stdio.h>
#include <string.h>

int main()
{
    char firstStr[50] = "Hello, "; // Enough space for concatenation
    char secStr[] = "World!";

    strcat(firstStr, secStr); // Append secStr to firstStr

    printf("Concatenated String: %s\n", firstStr);

    return 0;
}
