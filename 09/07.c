#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {1223, 5.4, "pogo"};
    printInfo(s1);
    return 0;
}

void printInfo(struct student s1)
{
    printf("Student Information:\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("CGPA: %.2f\n", s1.cgpa);
}
