#include <stdio.h>

void printString(char arr[]);
int countLength(char arr[]);

int main()
{
    char name[100];

    printf("Enter your name: ");
    fgets(name, 100, stdin);

    printf("Length is: %d\n", countLength(name));

    return 0;
}

int countLength(char arr[])
{
    int count = 0;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == '\n')
        {
            break;
        }
        count++;
    }

    return count;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }
}
