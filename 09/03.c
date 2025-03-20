#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student ece[100];
    ece[0].roll = 998;
    ece[0].cgpa = 9.8;
    strcpy(ece[0].name, "pogo");

    printf("name = %s\n", ece[0].name);

    return 0;
}