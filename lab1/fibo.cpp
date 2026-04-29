#include <iostream>
#include <iomanip>
using namespace std;
int fibo(int n){
    if(n<=1)
    return n;
   else
      return fibo(n-1)+fibo(n-2);
}
int main(){
    int n=12;
    for(int i =0; i<=n; i++){
        cout<<fibo(i)<<"  ";
    }
}