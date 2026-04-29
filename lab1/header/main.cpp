#include <iostream>
#include "mathfuncs.h"
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    double result = processNumber(number);

    if (number < 0)
        cout << "Square: " << result << endl;
    else
        cout << "Square root: " << result << endl;

    return 0;
}