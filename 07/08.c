#include <stdio.h>

int main()
{
    int age = 90;
    char _age = 'a';

    int *ptr = &age;
    char *_ptr = &_age;

    printf("%u , %uDifference = %td\n", ptr, _ptr, ptr - _ptr);

    return 0;
}
