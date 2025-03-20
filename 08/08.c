#include <stdio.h>
#include <string.h>

int main()
{
    char oldStr[] = "C Programming";
    char newStr[50]; // Ensure enough space

    strcpy(newStr, oldStr); // Copy oldStr to newStr

    printf("Copied String: %s\n", newStr);

    return 0;
}
