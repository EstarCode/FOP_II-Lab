#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0)
        return rev;
    
    return reverseNumber(n / 10, rev * 10 + n % 10);
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num < 10) {
        cout << "Please enter a number with two or more digits.\n";
    } else {
        int result = reverseNumber(num);
        cout << "Reversed number: " << result << endl;
    }

    return 0;
}