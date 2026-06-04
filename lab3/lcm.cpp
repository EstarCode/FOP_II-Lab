#include <iostream>
#include <iomanip>
using namespace std;
int lcm(int a, int b){
    if (b==0)
        return a;
   else
       return (a*b)/lcm(a, a%b);
}
int main(){
    int a=48;
    int b=50;
    lcm(a,b);
    return 0;
}