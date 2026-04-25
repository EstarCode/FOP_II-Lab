#include<iostream>
using namespace std;
int reverseNum(int num, int rev =0 ){
    if (num == 0)
        return rev;
    else 
       return reverseNum(num/10, rev * 10 + num % 10);
}
int main(){
    int n;
    cout<<"Entere Number\n";
    cin>>n;
    if (n < 10)
       cout<<"Enter numbers greater than 9\n";
    else
        cout<<reverseNum(n);
    return 0;
}