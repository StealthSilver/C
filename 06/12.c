// albhabets in english language

#include <stdio.h>

void printAlphabet(char *ptr)
{
    printf("English Alphabet: ");
    for (int i = 0; i < 26; i++)
    {
        printf("%c ", *(ptr + i));
    }
    printf("\n");
}

int main()
{
    char alphabet[26];
    char *ptr = alphabet;

    for (int i = 0; i < 26; i++)
    {
        *(ptr + i) = 'A' + i;
    }

    printAlphabet(ptr);

    return 0;
}
