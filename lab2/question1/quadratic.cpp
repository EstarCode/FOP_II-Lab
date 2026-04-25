#include<iostream>
#include<cmath>
using namespace std;
inline double quadratic(int a, int b, int c){
    double root1, root2;
    root1 = -b + sqrt(b*b + 4*a*c)/2*a;
    root2 = -b - sqrt(b*b + 4*a*c)/2*a;
    if (b*b + 4*a*c > 0){
        return root1;
        return root2;
    }
    else if (b*b + 4*a*c == 0){
        return root1;
    }
    else
        cout<<"Invalid roots"<<endl;
}
int main(){
int x, y, z;
double result;
cout<<"Enter Coffiecient of quadratic equation"<<endl;
cin>>x>>y>>z;
result = quadratic(x, y, z);
cout<<result;
return 0;

}