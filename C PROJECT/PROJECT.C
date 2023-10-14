#include <stdio.h>
#include <stdlib.h>

struct Customer {
    char name[50];
    int id;
    float balance;
};

void addCustomer(struct Customer customers[], int *numCustomers) {
    if (*numCustomers < 100) {
        struct Customer newCustomer;

        printf("Enter customer name: ");
        scanf("%s", newCustomer.name);

        printf("Enter customer ID: ");
        scanf("%d", &newCustomer.id);

        printf("Enter initial balance: ");
        scanf("%f", &newCustomer.balance);

        customers[*numCustomers] = newCustomer;
        (*numCustomers)++;

        printf("Customer added successfully!\n");
    } else {
        printf("Maximum number of customers reached!\n");
    }
}

void displayCustomer(struct Customer customer) {
    printf("Customer Name: %s\n", customer.name);
    printf("Customer ID: %d\n", customer.id);
    printf("Current Balance: $%.2f\n", customer.balance);
}

void displayAllCustomers(struct Customer customers[], int numCustomers) {
    if (numCustomers == 0) {
        printf("No customers found!\n");
    } else {
        printf("Customer List:\n");
        for (int i = 0; i < numCustomers; i++) {
            printf("Customer %d:\n", i + 1);
            displayCustomer(customers[i]);
            printf("\n");
        }
    }
}

void updateBalance(struct Customer customers[], int numCustomers) {
    int customerId;
    float amount;
    int found = 0;

    printf("Enter customer ID: ");
    scanf("%d", &customerId);

    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].id == customerId) {
            found = 1;

            printf("Enter amount to update (positive for credit, negative for debit): ");
            scanf("%f", &amount);

            customers[i].balance += amount;

            printf("Balance updated successfully!\n");
            break;
        }
    }

    if (!found) {
        printf("Customer not found!\n");
    }
}

int main() {
    struct Customer customers[100];
    int numCustomers = 0;
    int choice;

    do {
        printf("Customer Billing System\n");
        printf("1. Add Customer\n");
        printf("2. Display All Customers\n");
        printf("3. Update Balance\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCustomer(customers, &numCustomers);
                break;
            case 2:
                displayAllCustomers(customers, numCustomers);
                break;
            case 3:
                updateBalance(customers, numCustomers);
                break;
            case 4:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }

        printf("\n");
    } while (choice != 4);

    return 0;
}
