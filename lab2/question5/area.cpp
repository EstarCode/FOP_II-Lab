#include<iostream>
using namespace std;
double findArea(int a, int b){
    double recArea;
    recArea = a * b;
    return recArea;
}
double findArea(int a){
    double cirArea;
    const float PI = 3.14;
    cirArea = PI * a * a/2;
    return cirArea;
}
int findArea(int a, int b, int h){
    double trapArea;
    trapArea = (a + b)*h/2;
    return trapArea;
}

int main(){
    int length, width, height;
    cout<<"Enter Length: ";
    cin>>length;
    cout<<"Enter Width: ";
    cin>>width;
    cout<<"Enter Height: ";
    cin>>height;

    cout<<"Rectangle Area = "<<findArea(length, width)<<endl;
    cout<<"Circle Area = "<<findArea(length)<<endl;
    cout<<"Trapezium Area = "<<findArea(length, width, height)<<endl;
}