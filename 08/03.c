#include <stdio.h>

void printString(char arr[]);

int main()
{

    char name[50];

    scanf("%s", name);
    printf("your name is %s", name);

    return 0;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n");
}