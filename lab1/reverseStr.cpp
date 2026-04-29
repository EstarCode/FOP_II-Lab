#include <iostream>
using namespace std;

string reverseString(string str) {
    if (str == "")   
        return "";

    return reverseString(str.substr(1)) + str[0];
}

int main() {
    string text;

    cout << "Enter a string: ";
    cin >> text;

    cout << "Reversed string: " << reverseString(text) << endl;

    return 0;
}