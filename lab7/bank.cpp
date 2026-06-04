#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct Customer
{
    int accountNumber;
    char fname[30];
    char lname[30];
    double balance;
};

void displayCustomers(Customer customers[], int size)
{
    cout << left << setw(15) << "Account No"
         << setw(15) << "First Name"
         << setw(15) << "Last Name"
         << setw(10) << "Balance" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << left << setw(15) << customers[i].accountNumber
             << setw(15) << customers[i].fname
             << setw(15) << customers[i].lname
             << setw(10) << customers[i].balance << endl;
    }
}

int main()
{
    Customer customers[4];
    int size = 4;

    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter data for customer " << i + 1 << endl;
        cout << "Account Number: ";
        cin >> customers[i].accountNumber;
        cout << "First Name: ";
        cin >> customers[i].fname;
        cout << "Last Name: ";
        cin >> customers[i].lname;
        cout << "Balance: ";
        cin >> customers[i].balance;
    }

    ofstream textFile("customers.txt");

    for (int i = 0; i < size; i++)
    {
        textFile << customers[i].accountNumber << " "
                 << customers[i].fname << " "
                 << customers[i].lname << " "
                 << customers[i].balance << endl;
    }

    textFile.close();
    ofstream binaryFile("customers.dat", ios::binary);
    for (int i = 0; i < size; i++)
    {
        binaryFile.write((char*)&customers[i], sizeof(Customer));
    }

    binaryFile.close();
    cout << "\nCUSTOMER DATA BEFORE DELETE OPERATION";
    displayCustomers(customers, size);

    int deleteAcc;
    cout << "\nEnter account number to delete: ";
    cin >> deleteAcc;

    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (customers[i].accountNumber == deleteAcc)
        {
            found = 1;
            for (int j = i; j < size - 1; j++)
            {
                customers[j] = customers[j + 1];
            }
            size--;
            break;
        }
    }
    if (found)
        cout << "\nCustomer deleted successfully.\n";
    else
        cout << "\nCustomer not found.\n";
    ofstream updateText("customers.txt");
    for (int i = 0; i < size; i++)
    {
        updateText << customers[i].accountNumber << " "
                   << customers[i].fname << " "
                   << customers[i].lname << " "
                   << customers[i].balance << endl;
    }

    updateText.close();
    ofstream updateBinary("customers.dat", ios::binary);
    for (int i = 0; i < size; i++)
    {
        updateBinary.write((char*)&customers[i], sizeof(Customer));
    }

    updateBinary.close();
    cout << "\nCUSTOMER DATA AFTER DELETE OPERATION";
    displayCustomers(customers, size);

    return 0;
}