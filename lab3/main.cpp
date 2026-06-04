#include<iostream>
using namespace std;
int cal(int x, int y){
    if (y==0)
    return 1;
    else if(y==1)
    return x;
else{
    cout<<y<<endl;
    return x*cal(x, y-1);
}  
}
int main(){
    int a = -2;
    int b = 5;
    cal(-2, 5);
}