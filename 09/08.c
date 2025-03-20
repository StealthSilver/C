#include <stdio.h>
#include <string.h>

typedef struct student
{
    int roll;
    float cgpa;
    char name[100];
} stu;

typedef struct computerengineeringstudent
{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main()
{
    coe s1;
    s1.roll = 42332;
    s1.cgpa = 8.4;
    strcpy(s1.name, "John Doe");

    printf("Student roll no: %d\n", s1.roll);
    printf("Student CGPA: %.2f\n", s1.cgpa);
    printf("Student Name: %s\n", s1.name);

    return 0;
}
