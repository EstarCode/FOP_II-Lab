#include <iostream>
using namespace std;


void printTriangle(char symbol, int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << symbol;
        }
        cout << endl;
    }
}

int main() {
    int choice;
    
    cout << "Choose an option:\n";
    cout << "1. Print default pattern (*, size 5)\n";
    cout << "2. Enter your own symbol and size\n";
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1) {
        printTriangle('*', 5);
    } 
    else if (choice == 2) {
        char symbol;
        int size;

        cout << "Enter a symbol: ";
        cin >> symbol;

        cout << "Enter size (minimum 5): ";
        cin >> size;

        if (size < 5) {
            cout << "Size too small! Using minimum size 5.\n";
            size = 5;
        }

        printTriangle(symbol, size);
    } 


    return 0;
}