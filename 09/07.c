#include <stdio.h>
#include <string.h>

void printInfo(struct student s1);

struct student
{
    int roll;
    int cgpa;
    char name[100];
};

int main()
{

    struct student s1 = {1223, 5.4, "pogo"};
    printInfo(s1);

    return 0;
}

void printInfo(struct student s1)
{
    printf("student information : \n");
    printf("student.roll : %d \n", s1.roll);
    printf("student.name :  %s\n", s1.name);
    printf("student.cgpa :  %f\n", s1.cgpa);
}