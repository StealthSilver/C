#include <stdio.h>

int main()
{

    FILE *fptr;
    fptr = fopen("Student.txt", "w");

    char name[100];
    int age;
    float cgpa;

    printf("enter the name : \n");
    scanf("%s", &name);

    printf("enter the age : \n");
    scanf("%d", &age);

    printf("enter the cgpa: \n");
    scanf("%f", &cgpa);

    fprintf(fptr, "%s\t", name);
    fprintf(fptr, "%d\t", age);
    fprintf(fptr, "%f\t", cgpa);

    fclose(fptr);

    return 0;
}