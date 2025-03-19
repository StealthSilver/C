#include <stdio.h>

int main()
{
    int age = 90;
    int _age = 32;

    int *ptr = &age;
    int *_ptr = &_age;

    printf("Difference = %td\n", ptr - _ptr);
    printf("Comparison = %d\n", ptr == _ptr);

    return 0;
}
