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

    struct student s2;
    s2.roll = 143223;
    s2.cgpa = 9.2;

    strcpy(s2.name, "iron");

    printf("student name = %s \n", s2.name);
    printf("student cgpa = %d \n", s2.cgpa);
    printf("student roll = %f \n", s2.roll);

    struct student s3;
    s3.roll = 122323;
    s3.cgpa = 9.6;

    strcpy(s3.name, "iron");

    printf("student name = %s \n", s3.name);
    printf("student cgpa = %d \n", s3.cgpa);
    printf("student roll = %f \n", s3.roll);
}