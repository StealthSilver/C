#include <stdio.h>

int main()
{
    int age = 90;
    char _age = 'a';

    int *ptr = &age;
    char *_ptr = &_age;

    printf("Difference = %td\n", ptr - _ptr);
    printf("Comparison = %d\n", ptr == _ptr);

    return 0;
}
