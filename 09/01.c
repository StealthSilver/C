#include <stdio.h>
#include <string.h>

// user defined

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main()
{
    struct student s1;
    s1.roll = 1223;
    s1.cgpa = 9.6;
    // s1.name = "iron";
    strcpy(s1.name, "iron");

    printf("student name = %s \n", s1.name);
    printf("student cgpa = %d \n", s1.cgpa);
    printf("student roll = %f \n", s1.roll);
}