#include <stdio.h>
#include <string.h>

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

void inputAddress(struct address *addr)
{
    printf("Enter House Number: ");
    scanf("%d", &addr->houseNo);

    printf("Enter Block: ");
    scanf("%d", &addr->block);

    printf("Enter City: ");
    scanf(" %[^\n]", addr->city);

    printf("Enter State: ");
    scanf(" %[^\n]", addr->state);
}

void printAddress(struct address addr)
{
    printf("\nAddress Details:\n");
    printf("House No: %d\n", addr.houseNo);
    printf("Block: %d\n", addr.block);
    printf("City: %s\n", addr.city);
    printf("State: %s\n", addr.state);
}

int main()
{
    struct address adds[4];

    for (int i = 0; i < 4; i++)
    {
        printf("\nEnter details for person %d:\n", i + 1);
        inputAddress(&adds[i]);
    }

    printf("\n========== Stored Addresses ==========\n");
    for (int i = 0; i < 4; i++)
    {
        printf("\nPerson %d:", i + 1);
        printAddress(adds[i]);
    }

    return 0;
}
