#include<iostream>
using namespace std;
void numA(int n);
void numB(int n){
    if (n <= 0)
    return;
   numA(n-1);
   cout<<n<<" ";
}
int main(){
    numA(8);
    return 0;
}
void numA(int n){
    if(n<=0)
    return;
    numB(n-2);
    cout<<n<<" ";
}