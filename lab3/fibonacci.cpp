#include<iostream>
using namespace std;
int fibonacci(int n){
    int a=0, b=1, next;
    for(int i =0; i<n; i++){
       cout<<a<<"  ";
        next = a+b;
        a = b;
        b = next;
    }
    return a;
}
int main(){
    int n; 
    cout<<"Enter N: ";
    cin>>n;
    int last =fibonacci(n);
    cout<<"\n"<<last;
}