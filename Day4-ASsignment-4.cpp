#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 3
#define MAX_NAME_LENGTH 50

// Define a structure for a customer
struct Customer {
    int account_no;
    char name[MAX_NAME_LENGTH];
    float balance;
};

// Function to print customer details whose balance < 100 Rs
void print_low_balance_customers(struct Customer customers[]) {
    int i;
    printf("Customers with balance less than 100 Rs:\n");
    for (i = 0; i < MAX_CUSTOMERS; i++) {
        if (customers[i].balance < 100.0) {
            printf("Account No: %d\tName: %s\n", customers[i].account_no, customers[i].name);
        }
    }
}

int main() {
    int i;
    struct Customer customers[MAX_CUSTOMERS];

    // Accept customer details
    for (i = 0; i < MAX_CUSTOMERS; i++) {
        printf("Enter details for customer %d:\n", i + 1);
        printf("Account No: ");
        scanf("%d", &customers[i].account_no);
        printf("Name: ");
        scanf("%s", customers[i].name);
        printf("Balance: ");
        scanf("%f", &customers[i].balance);
    }

    // Print low balance customers
    print_low_balance_customers(customers);

    return 0;
}

