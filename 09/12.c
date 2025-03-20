// structure for bank account info

#include <stdio.h>
#include <string.h>

typedef struct bankAccount
{
    int accountNumber;
    char accountHolder[100];
    char bankName[100];
    float balance;
} BankAccount;

int main()
{

    BankAccount customer1;

    customer1.accountNumber = 123456789;
    strcpy(customer1.accountHolder, "John Doe");
    strcpy(customer1.bankName, "ABC Bank");
    customer1.balance = 5000.75;

    printf("Bank Account Information:\n");
    printf("Account Number: %d\n", customer1.accountNumber);
    printf("Account Holder: %s\n", customer1.accountHolder);
    printf("Bank Name: %s\n", customer1.bankName);
    printf("Balance: $%.2f\n", customer1.balance);

    return 0;
}
