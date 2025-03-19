#include <stdio.h>

int main()
{

    int marks[2][3];

    marks[0][0] = 87;
    marks[0][1] = 17;
    marks[0][2] = 27;

    marks[1][0] = 32;
    marks[1][1] = 24;
    marks[1][2] = 22;

    printf("%d", marks[0][0]);
    return 0;
}