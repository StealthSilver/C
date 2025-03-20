

// student info in a table format
#include <stdio.h>

#define STUDENT_COUNT 5

struct Student
{
    char name[100];
    float marks;
    char course[50];
    int age;
};

int main()
{
    FILE *fptr;
    struct Student students[STUDENT_COUNT];

    fptr = fopen("Students.txt", "w");

    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < STUDENT_COUNT; i++)
    {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("Course: ");
        scanf(" %[^\n]", students[i].course);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("\n");
    }

    fprintf(fptr, "----------------------------------------------------\n");
    fprintf(fptr, "| %-20s | %-6s | %-10s | %-3s |\n", "Name", "Marks", "Course", "Age");
    fprintf(fptr, "----------------------------------------------------\n");

    for (int i = 0; i < STUDENT_COUNT; i++)
    {
        fprintf(fptr, "| %-20s | %-6.2f | %-10s | %-3d |\n",
                students[i].name, students[i].marks, students[i].course, students[i].age);
    }

    fprintf(fptr, "----------------------------------------------------\n");

    fclose(fptr);

    printf("Student details have been written to Students.txt\n");

    return 0;
}
