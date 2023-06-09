#include <stdio.h>

typedef struct {
    int accountNumber;
    char accountHolder[50];
    float balance;
} BankAccount;

// Function to deposit an amount into a bank account
void deposit(BankAccount* account, float amount) {
    account->balance += amount;
}

// Function to withdraw an amount from a bank account
void withdraw(BankAccount* account, float amount) {
    // Check if the account has sufficient balance for withdrawal
    if (account->balance >= amount) {
        account->balance -= amount;
        printf("Amount withdrawn successfully.\n");
    } else {
        printf("Insufficient balance.\n");
    }
}

int main() {
    BankAccount account;

    // Set the account number for the bank account
    account.accountNumber = 123456;

    // Prompt the user to enter the account holder's name
    printf("Enter account holder's name: ");
    scanf("%s", account.accountHolder);

    // Prompt the user to enter the initial balance
    printf("Enter initial balance: ");
    scanf("%f", &account.balance);

    int choice;
    float amount;

    // Prompt the user to choose an option: deposit or withdraw
    printf("\nChoose an option:\n");
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    // Perform the chosen operation based on the user's choice
    switch (choice) {
        case 1:
            // Prompt the user to enter the amount to deposit
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            deposit(&account, amount);
            printf("Amount deposited successfully.\n");
            break;
        case 2:
            // Prompt the user to enter the amount to withdraw
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            withdraw(&account, amount);
            break;
        default:
            printf("Invalid choice.\n");
            return 1;
    }

    // Display the bank account details
    printf("\nBank Account Details:\n");
    printf("Account Number: %d\n", account.accountNumber);
    printf("Account Holder: %s\n", account.accountHolder);
    printf("Balance: %.2f\n", account.balance);

    return 0;
}
