#include <stdio.h>

void indian()
{
    printf("Namaste \n");
}

void french()
{
    printf("Bonjour \n");
}

int main()
{

    char user;

    printf("enter f for french and i for indian \n");
    scanf("%c", &user);

    user == 'f' ? french() : indian();

    return 0;
}