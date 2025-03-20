#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    int cgpa;
    char name[100];
};

int main()
{
    struct student s1 = {1223, 9.5, "pogo"};
    printf("student roll = %d\n", s1.roll);
    return 0;
}