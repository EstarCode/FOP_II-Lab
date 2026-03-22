#include<iostream>
using namespace std;
int swap(int& x, int& y);
int main(){
    int x = 10;
    int y = 20;
    cout <<"before swap of x and y :"<<x<<"  "<<y<<endl;
    swap(x, y);
    cout<<"After swamp of x and y: "<<x<<"  "<<y<<endl;
    
}
int swap(int& x, int& y){
    cout <<"before swap of x and y :"<<x<<"  "<<y<<endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout<<"After swap of x and y: "<<x<<"  " <<y<<endl;

}