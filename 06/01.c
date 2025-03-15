#include <stdio.h>

int main()
{
    int age = 22;

    int *ptr = &age; // * -> value at address
                     // & -> address of

    int _age = *ptr;

    printf("*ptr is : %d \n", *ptr);
    printf("&age is : %d \n", &age);
    printf("_age is : %d \n", _age);

    return 0;
}