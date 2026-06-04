#include <iostream>
using namespace std;

void triangle( char symbol = '*', int n=5){
    for (int i = 1; i<=5; i++){
        for (int j = 0; j<i; j++){
            cout<<symbol;
        }
        cout<<endl;
    }
}
int main(){
    cout<<"Enter N: ";
    int n;
    cin>>n;         
    cout<<"Enter symbol: ";         
    char symbol;            
    cin>>symbol;
    triangle(symbol, n);   
    triangle();  
         
}
