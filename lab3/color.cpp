#include <iostream>
using namespace std;
struct Pixels{
string color;
int style;
};
void showPoint(Pixels P, int n){
cout<<"\n\nThe "<<n<<" point Color & STyle\";
cout<<P.color<<"\t"<<P.style << endl;
}

Pixels readPoint(){
Pixels myPoint;
cout<<"What is the pixel color: "; 
cin>>myPoint.color;
cout<<"What is the pixel style: ";
cin>>myPoint.style;
return myPoint;
}
int main(){
Pixels Point1 = readPoint();
showPoint(Point1, 1);
Pixels Point2 = Point1; 
showPoint(Point2, 2);
Point1.color+= 2; 
showPoint(Point1, 1);
return 0;
}