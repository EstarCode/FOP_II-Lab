#include <iostream>
using namespace std;

// Structure for phone
struct phone {
    int areaCode;
    int exchange;
    int number;
};

// Structure for person (nested)
struct person {
    string name;
    phone p;
};

// Function to input data
void inputData(person people[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "\nEnter details for person " << i + 1 << endl;

        cout << "Name: ";
        cin >> people[i].name;

        cout << "Area code: ";
        cin >> people[i].p.areaCode;

        cout << "Exchange: ";
        cin >> people[i].p.exchange;

        cout << "Number: ";
        cin >> people[i].p.number;
    }
}

// Function to display data
void displayData(person people[], int size) {
    cout << "\n--- Phone Directory ---\n";

    for (int i = 0; i < size; i++) {
        cout << people[i].name << ": ("
             << people[i].p.areaCode << ") "
             << people[i].p.exchange << "-"
             << people[i].p.number << endl;
    }
}
// Main function
int main() {
    const int SIZE = 10;
    person people[SIZE];

    inputData(people, SIZE);
    displayData(people, SIZE);

    return 0;
}