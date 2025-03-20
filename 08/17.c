// finding the highest frequency character
#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

void findHighestFrequencyChar(char str[]);

int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    findHighestFrequencyChar(str);

    return 0;
}

void findHighestFrequencyChar(char str[])
{
    int freq[ASCII_SIZE] = {0};
    int maxFreq = 0;
    char maxChar;

    for (int i = 0; str[i] != '\0'; i++)
    {
        freq[(int)str[i]]++;
        if (freq[(int)str[i]] > maxFreq)
        {
            maxFreq = freq[(int)str[i]];
            maxChar = str[i];
        }
    }

    printf("Highest frequency character: '%c' (occurs %d times)\n", maxChar, maxFreq);
}
