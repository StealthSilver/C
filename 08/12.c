// finding the salted form of password entered by the user

#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main()
{
    char password[100];

    printf("Enter your password: ");
    fgets(password, sizeof(password), stdin);
    password[strcspn(password, "\n")] = '\0';

    salting(password);

    return 0;
}

void salting(char password[])
{
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);

    printf("Salted password: %s\n", newPass);
}
