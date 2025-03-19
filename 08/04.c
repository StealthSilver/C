#include <stdio.h>

void printString(char arr[]);

int main()
{
    char fullName[100];

    scanf("%s", fullName);
    printf("your full name is : %s", fullName);
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n");
}