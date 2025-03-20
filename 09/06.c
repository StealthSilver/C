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

    struct student *ptr = &s1;
    printf("student->roll = %d\n", ptr->roll);
    printf("student->name = %d\n", ptr->name);
    printf("student->cgpa = %d\n", ptr->cgpa);

    return 0;
}