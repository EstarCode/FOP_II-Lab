#include <iostream>
#include <cmath>
using namespace std;
int findhypothenes(int a, int b, int &c);

int main() {
    int x, y, z;
    cout << "Enter values of triangle length and base: " << endl;
    cin>>x>>y;
    cout<<"Hypothenes is: "<<findhypothenes(x, y, z);
}
int findhypothenes(int a, int b, int &c){
    c = sqrt(a*a + b*b);
    return c;
}
