#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    ifstream infile("info.txt");
    if (!infile)
    {
        cout << "Error opening file!" << endl;
        return 1;
    }

    string name;
    double payRate, hours;
    double regularPay;
    double overtimePay;
    double grossPay;

    double totalRegular = 0;
    double totalOvertime = 0;
    double totalGross = 0;

    cout << fixed << setprecision(2);
    cout << setw(15) << "Name"
         << setw(12) << "Pay Rate"
         << setw(10) << "Hours"
         << setw(15) << "Regular Pay"
         << setw(15) << "Overtime"
         << setw(15) << "Gross Pay"
         << endl;


    while (infile >> name >> payRate >> hours)
    {
        if (hours <= 40)
        {
            regularPay = hours * payRate;
            overtimePay = 0;
        }
        else
        {
            regularPay = 40 * payRate;
            overtimePay = (hours - 40) * payRate * 1.5;
        }

        grossPay = regularPay + overtimePay;
        totalRegular += regularPay;
        totalOvertime += overtimePay;
        totalGross += grossPay;

        cout << setw(15) << name
             << setw(12) << payRate
             << setw(10) << hours
             << setw(15) << regularPay
             << setw(15) << overtimePay
             << setw(15) << grossPay
             << endl;
    }

    cout << setw(37) << "Totals"
         << setw(15) << totalRegular
         << setw(15) << totalOvertime
         << setw(15) << totalGross
         << endl;

    infile.close();
    return 0;
}