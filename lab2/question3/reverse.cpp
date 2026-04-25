#include<iostream>
using namespace std;
int reverseNum(int num){
    if (num == 0){
        return 0;
    }
    reverseNum(num-1); 
    cout<<num<<endl;
    }
       
int main(){
    int n;
    cout<<"Enter Number\n";
    cin>>n;
    if(n < 0)
        cout<<"It is invalid, Enter Positive integer\n";
    else
       cout<<"Display numbers from 1-"<<n<<endl;
        reverseNum(n);

        
    return 0;
}