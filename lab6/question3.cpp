#include <iostream>
#include <fstream>
using namespace std;

struct Customer
{
    int accountNo;
    string firstName;
    string lastName;
    double balance;
};

int main()
{
    Customer customer[5];
    ofstream outfile("bank.txt");
    cout << "Enter 5 customer records\n";

    for (int i = 0; i < 5; i++)
    {
        customer[i].accountNo = 1000 + i;
        cout << "\nAccount Number: "
             << customer[i].accountNo << endl;

        cout << "First Name: ";
        cin >> customer[i].firstName;
        cout << "Last Name: ";
        cin >> customer[i].lastName;
        cout << "Balance: ";
        cin >> customer[i].balance;

        outfile << customer[i].accountNo << " "
                << customer[i].firstName << " "
                << customer[i].lastName << " "
                << customer[i].balance << endl;
    }

    outfile.close();
    int searchAcc;
    bool found = false;

    cout << "\nEnter account number to search: ";
    cin >> searchAcc;
    ifstream infile("bank.txt");

    while (infile >> customer[0].accountNo
                  >> customer[0].firstName
                  >> customer[0].lastName
                  >> customer[0].balance)
    {
        if (customer[0].accountNo == searchAcc)
        {
            cout << "\nCustomer Found\n";
            cout << "Account Number: "
                 << customer[0].accountNo << endl;

            cout << "Name: "
                 << customer[0].firstName
                 << " "
                 << customer[0].lastName << endl;

            cout << "Balance: "
                 << customer[0].balance << endl;

            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Account not found!" << endl;
    }
    infile.close();

    return 0;
}