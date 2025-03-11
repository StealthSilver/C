// checking if the numebr is 2 digit or not
#include <stdio.h>

int main()
{
    int a;
    printf("enter the number : ");
    scanf("%d", &a);
    printf("%d \n", a > 9 && a < 100);

    return 0;
}