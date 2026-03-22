#include <iostream>
using namespace std;

// Function with default argument
int Fibonacci(int n = 10) {
    int a = 0, b = 1, next;

    cout << "Fibonacci Series: ";
    
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
    return n; 
}

int main() {
    int num;

    cout << "Enter number of terms: ";
    cin >> num;

    // Call with parameter and default argument
    Fibonacci(num);
    Fibonacci();

    return 0;
}