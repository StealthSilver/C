#include <stdio.h>

int main()
{
    float price = 100.00;
    float *ptr = &price;
    float **pptr = &ptr;

    printf("Value using **pptr: %f\n", **pptr);              //  Dereferencing twice gives the value of price
    printf("Value using *pptr: %p\n", (void *)*pptr);        //*pptr gives address stored in ptr
    printf("Address of price using ptr: %p\n", (void *)ptr); // ptr stores address of price
    printf("Address of ptr using pptr: %p\n", (void *)pptr); // pptr stores address of ptr

    return 0;
}
