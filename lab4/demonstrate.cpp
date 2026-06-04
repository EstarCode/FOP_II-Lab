#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;

    d.i = 65;
    cout << "After setting i = 65:\n";
    cout << "i = " << d.i << endl;
    cout << "f = " << d.f << endl;
    cout << "c = " << d.c << endl << endl;

    d.f = 30.14;
    cout << "After setting f = 3.14:\n";
    cout << "i = " << d.i << endl;
    cout << "f = " << d.f << endl;
    cout << "c = " << d.c << endl << endl;

    d.c = 'A';
    cout << "After setting c = 'A':\n";
    cout << "i = " << d.i << endl;
    cout << "f = " << d.f << endl;
    cout << "c = " << d.c << endl;

    return 0;
}