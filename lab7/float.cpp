#include <iostream>
using namespace std;

template <class T1, class T2>
double floatingPointDivide(T1 num1, T2 num2)
{
    return num1 / (num2 * 1.0);
}

int main()
{
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if (num2 == 0)
    {
        cout << "Division by zero is not allowed!" << endl;
    }
    else
    {
        cout << "Result = "
             << floatingPointDivide(num1, num2)
             << endl;
    }

    return 0;
}