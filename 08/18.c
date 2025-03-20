
// Function to remove spaces from a string

#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    removeSpaces(str);

    printf("String without spaces: %s\n", str);

    return 0;
}

void removeSpaces(char str[])
{
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
