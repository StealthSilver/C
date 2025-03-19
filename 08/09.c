#include <stdio.h>
#include <string.h>

int main()
{
    char str1[] = "Apple";
    char str2[] = "Banana";

    int result = strcmp(str1, str2);

    if (result == 0)
    {
        printf("Strings are equal.\n");
    }
    else if (result < 0)
    {
        printf("str1 comes before str2 in lexicographical order.\n");
    }
    else
    {
        printf("str1 comes after str2 in lexicographical order.\n");
    }

    return 0;
}
