#include <iostream>
using namespace std;

struct Customer {
    string name;
    int accountNumber;
    float balance;
};

void printLowBalance(Customer *c, int size) {
    cout << "\nCustomers with balance less than $200:\n";
    for(int i = 0; i < size; i++) {
        if((c + i)->balance < 200) {
            cout << "Name: " << (c + i)->name << endl;
        }
    }
}

void updateBalance(Customer *c, int size) {
    cout << "\nUpdated bafore balance > $1000):\n";
    for(int i = 0; i < size; i++) {
        if((c + i)->balance > 1000) {
            (c + i)->balance += 100;
            cout << "Name: " << (c + i)->name
                 << ", New Balance: $" << (c + i)->balance << endl;
        }
    }
}

int main() {
    Customer c[2];

    for(int i = 0; i < 2; i++) {
        cout << "\nEnter details for customer " << i + 1 << endl;
        cout << "Name: ";
        cin >> c[i].name;
        cout << "Account Number: ";
        cin >> c[i].accountNumber;
        cout << "Balance: ";
        cin >> c[i].balance;
    }
    printLowBalance(c, 2);
    updateBalance(c, 2);

    return 0;
}