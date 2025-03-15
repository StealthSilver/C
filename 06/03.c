#include <stdio.h>

int main()
{

    int x;    // variable
    int *ptr; // pointer

    ptr = &x; // storing the address of x in ptr
    *ptr = 0; // changing the value at address stored in ptr to 0

    printf("x = %d \n", x);
    printf(" * ptr = %d \n", *ptr);

    *ptr += 5;

    printf("x = %d \n", x);
    printf(" * ptr = %d \n", *ptr);

    (*ptr)++;

    printf("x = %d \n", x);
    printf(" * ptr = %d \n", *ptr);

    return 0;
}