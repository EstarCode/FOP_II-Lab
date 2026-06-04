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
    float taxRate;

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


void inputEmployees(Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "ID: ";
        cin >> emp[i].id;

        cout << "Name: ";
        cin >> emp[i].name;

        cout << "Education: ";
        cin >> emp[i].educationLevel;

        cout << "Salary: ";
        cin >> emp[i].salary;

        
        emp[i].netSalary = calculateNetSalary(&emp[i]);
    }
}


void display(Employee emp[], int n) {
    cout << "\nID\tName\tSalary\tNetSalary\n";

    for (int i = 0; i < n; i++) {
        cout << emp[i].id << "\t"
             << emp[i].name << "\t"
             << emp[i].salary << "\t"
             << emp[i].netSalary << endl;
    }
}

int main() {
    Employee emp[3];

    inputEmployees(emp, 3);
    display(emp, 3);

    return 0;
}