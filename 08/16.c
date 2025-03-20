// Function to convert lowercase vowels to uppercase

#include <stdio.h>
#include <string.h>

void convertVowelsToUppercase(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    convertVowelsToUppercase(str);

    printf("Modified string: %s", str);

    return 0;
}

void convertVowelsToUppercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
    }
}
