// to check the type of the char
#include <stdio.h>
#include <ctype.h>

int main()
{
    char a = '1';

    if (isdigit(a))
        printf("The character is a digit.\n");
    else
        printf("The character is not a digit.\n");

    return 0;
}