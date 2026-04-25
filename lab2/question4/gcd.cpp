#include<iostream>
using namespace std;
double findGCD(int a, int b){
    if (b == 0)
       return a;
    else
    return findGCD(b, a%b);
}
 int main(){
    int num1, num2;
    cout<<"Enter num1:";
    cin>>num1;
    cout<<"Enter num2:";
    cin>>num2;
    cout<<"Display GCD of Num1 and Num2 is "<<findGCD(num1, num2);
    return 0;
 }