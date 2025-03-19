// Function to generate multiplication tables

#include <stdio.h>

#define ROWS 2
#define COLS 10

void generateTables(int table[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        int num = (i == 0) ? 2 : 3;
        for (int j = 0; j < COLS; j++)
        {
            table[i][j] = num * (j + 1);
        }
    }
}

void printTables(int table[ROWS][COLS])
{
    for (int i = 0; i < ROWS; i++)
    {
        int num = (i == 0) ? 2 : 3;
        printf("Multiplication Table of %d:\n", num);
        for (int j = 0; j < COLS; j++)
        {
            printf("%d x %d = %d\n", num, j + 1, table[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int table[ROWS][COLS];

    generateTables(table);
    printTables(table);

    return 0;
}
