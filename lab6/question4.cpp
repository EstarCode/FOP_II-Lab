#include <iostream>
#include <fstream>
using namespace std;

struct Employee
{
    int id;
    char sex;
    double wage;
    int years;
};

int main()
{
    Employee emp[3], temp;
    cout << "Enter information for 3 employees\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEmployee " << i + 1 << endl;

        cout << "ID Number: ";
        cin >> emp[i].id;

        cout << "Sex (M/F): ";
        cin >> emp[i].sex;

        cout << "Hourly Wage: ";
        cin >> emp[i].wage;

        cout << "Years with Company: ";
        cin >> emp[i].years;
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = i + 1; j < 3; j++)
        {
            if (emp[i].id > emp[j].id)
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    ofstream outfile("employee.txt");

    for (int i = 0; i < 3; i++)
    {
        outfile << emp[i].id << " "
                << emp[i].sex << " "
                << emp[i].wage << " "
                << emp[i].years << endl;
    }

    outfile.close();

    cout << "\nEmployee records stored successfully!\n";

    ifstream infile("employee.txt");

    int id, years;
    char sex;
    double wage;
    double hoursWorked;

    cout << "\nMONTHLY PAY REPORT\n";

    while (infile >> id >> sex >> wage >> years)
    {
        cout << "\nEmployee ID: " << id << endl;

        cout << "Enter hours worked this month: ";
        cin >> hoursWorked;

        double totalPay = wage * hoursWorked;

        cout << "Monthly Pay: " << totalPay << endl;
    }

    infile.close();

    ifstream readFile("employee.txt");
    ofstream updateFile("updated.txt");

    cout << "\nUPDATE EMPLOYEE RECORDS\n";

    while (readFile >> id >> sex >> wage >> years)
    {
        cout << "\nEmployee ID: " << id << endl;

        cout << "Current Wage: " << wage << endl;
        cout << "Enter New Wage: ";
        cin >> wage;

        cout << "Current Years: " << years << endl;
        cout << "Enter New Years: ";
        cin >> years;

        updateFile << id << " "
                   << sex << " "
                   << wage << " "
                   << years << endl;
    }

    readFile.close();
    updateFile.close();

    cout << "\nUpdated file created successfully!" << endl;

    return 0;
}