#include <iostream>
using namespace std;

class Calculator {
private:
    float a, b;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }
    float add() {
        return a + b;
    }
    float subtract() {
        return a - b;
    }
    float multiply() {
        return a * b;
    }
    float divide() {
        if (b == 0) {
            cout << "Division by zero not allowed!" << endl;
            return 0;
        }
        return a / b;
    }
};

int main() {
    Calculator calc;
    char choice;

    calc.input();

    cout << "\nSelect Operation:\n";
    cout << "+. Addition (+)\n";
    cout << "-. Subtraction (-)\n";
    cout << "*. Multiplication (*)\n";
    cout << "/. Division (/)\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case '+':
            cout << "Result = " << calc.add() << endl;
            break;

        case '-':
            cout << "Result = " << calc.subtract() << endl;
            break;

        case '*':
            cout << "Result = " << calc.multiply() << endl;
            break;

        case '/':
            cout << "Result = " << calc.divide() << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}