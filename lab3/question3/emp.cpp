#include <iostream>
using namespace std;
struct Employee {
    int id;
    string name;
    string educationLevel;
    float salary;
    float netSalary;
};
void inputEmployees(Employee *emp, int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Employee " << i + 1 << endl;
        cout << "ID: ";
        cin >> emp[i].id;
        cout << "Name: ";
        cin >> emp[i].name;
        cout << "Education Level: ";
        cin >> emp[i].educationLevel;
        cout << "Salary: ";
        cin >> emp[i].salary;
    }
}

void calculateNetSalary(Employee &e) {
    float tax = 0;
    if (e.salary >= 5000 && e.salary < 10000)
        tax = 0.10 * e.salary;
    else if (e.salary < 15000)
        tax = 0.15 * e.salary;
    else if (e.salary < 20000)
        tax = 0.20 * e.salary;
    else if (e.salary < 25000)
        tax = 0.25 * e.salary;
    else if (e.salary >= 25000)
        tax = 0.30 * e.salary;
    float pension = 0.07 * e.salary;

    float netSalary = e.salary - tax - pension;
}

Employee processEmployee(Employee e) {
    calculateNetSalary(e);
    return e;
}

void displayEmployees(Employee emp[], int n) {
    cout << "ID\tName\tEdu.Level\tSalary\tNet Salary\n";
    for (int i = 0; i < n; i++) {
        cout << emp[i].id << "\t"
             << emp[i].name << "\t"
             << emp[i].educationLevel << "\t\t"
             << emp[i].salary << "\t"
             << emp[i].netSalary << endl;
    }
}

int main() {
    const int n = 3;
    Employee emp[n];
    inputEmployees(emp, n);

    for (int i = 0; i < n; i++) {
        emp[i] = processEmployee(emp[i]);
    }

    displayEmployees(emp, n);

    return 0;
}