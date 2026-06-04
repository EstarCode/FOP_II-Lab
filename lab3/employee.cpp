#include <iostream>
using namespace std;


struct Employee {
    int id;
    string name;
    string educationLevel;
    float salary;
    float netSalary;
};

float calculateNetSalary(Employee *e) {
    float taxRate = 0;

    if (e->salary >= 5000 && e->salary < 10000)
        taxRate = 0.10;
    else if (e->salary < 15000)
        taxRate = 0.15;
    else if (e->salary < 20000)
        taxRate = 0.20;
    else if (e->salary < 25000)
        taxRate = 0.25;
    else
        taxRate = 0.30;

    float incomeTax = e->salary * taxRate;
    float pension = e->salary * 0.07;

    return e->salary - incomeTax - pension;
}

void inputEmployees(Employee emp[], int &n) {
    cout << "Enter number of employees: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "ID: ";
        cin >> emp[i].id;

        cout << "Name: ";
        cin >> emp[i].name;

        cout << "Education Level: ";
        cin >> emp[i].educationLevel;

        cout << "Salary: ";
        cin >> emp[i].salary;

        emp[i].netSalary = calculateNetSalary(&emp[i]);
    }
}


void displayEmployees(Employee emp[], int n) {
    cout << "\n-------------------------------------------\n";
    cout << "ID\tName\tEdu\tSalary\tNetSalary\n";
    cout << "-------------------------------------------\n";

    for (int i = 0; i < n; i++) {
        cout << emp[i].id << "\t"
             << emp[i].name << "\t"
             << emp[i].educationLevel << "\t"
             << emp[i].salary << "\t"
             << emp[i].netSalary << endl;
    }
}

void searchEmployee(Employee emp[], int n) {
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (int i = 0; i < n; i++) {
        if (emp[i].id == id) {
            cout << "Found: " << emp[i].name 
                 << " Salary: " << emp[i].salary << endl;
            return;
        }
    }
    cout << "Employee not found!\n";
}
void sortBySalary(Employee emp[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (emp[i].salary < emp[j].salary) {
                Employee temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }
    cout << "Sorted successfully.\n";
}


int main() {
    Employee emp[100];
    int n = 0;
    int choice;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Input Employees\n";
        cout << "2. Display Employees\n";
        cout << "3. Search Employee\n";
        cout << "4. Sort by Salary\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputEmployees(emp, n);
                break;
            case 2:
                displayEmployees(emp, n);
                break;
            case 3:
                searchEmployee(emp, n);
                break;
            case 4:
                sortBySalary(emp, n);
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 0);

    return 0;
}