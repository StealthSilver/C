#include <stdio.h>

int main()
{
    int age = 22;

    int *ptr = &age; // * -> value at address
                     // & -> address of

    int _age = *ptr;

    printf("*ptr is : %d \n", *ptr); // value at address pointed by the pointer
    printf("ptr is : %d \n", ptr);   // adress pointed by the pointer
    printf("&age is : %d \n", &age); // address of the variable
    printf("_age is : %d \n", _age); // value of the variable at the address pointed by the pointer

    return 0;
}