#include <stdio.h>

int main()
{

    printf("%d \n", 3 == 3 && 4 == 3);
    printf("%d \n", 3 == 3 && 4 != 3);
    printf("%d \n", 3 == 3 || 4 == 3);
    printf("%d \n", 3 != 3 || 4 == 3);
    printf("%d \n", !(3 > 4));
    return 0;
}