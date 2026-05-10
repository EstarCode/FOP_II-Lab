#include<iostream>
using namespace std;

struct area{
    int height;
    int width;

    void setDimention(int h, int w){
        height = h;
        width = w;
    }

    double getArea(){
        double area;
        area = height * width;
        return area;
    }
};

int main(){
    area rect;
    int h, w;

    cout<<"Enter height: ";
    cin>>h;

    cout<<"Enter width: ";
    cin>>w;

    rect.setDimention(h,w);

    cout<<"Area of Rectangle: "<<rect.getArea();

    return 0;
}