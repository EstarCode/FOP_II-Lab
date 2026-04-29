#include<iostream>
using namespace std;
float area(float length, float width);
int main(){
    float l;
    float w;
    float rectangle_area;
    cout<<"Enter the value of rectangle length: ";
    cin>>l;
    cout<<"Enter the value of rectangle width: ";
    cin>>w;
    rectangle_area =area(l,w);
    cout<<"The area of rectangle is: "<<rectangle_area;
}
float area(float length, float width){
    float area;
    area = length * width;
    return area;
    
}