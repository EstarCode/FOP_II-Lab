#include<iostream>
using namespace std;
double sum = 0;
void storeMark(float mark[], int size){
    for (int i = 0; i < size; ++i){ 
       cout<<"Enter mark "<<i + 1<<": ";
        cin>>mark[i];
    }
    
}
void displayMarks(float mark[5], int size){
    for(int i=0; i<size; ++i ){
        cout<<mark[i]<<",  ";
    }
    cout<<endl;
}
double averageMarks(float mark[5], int size){
    double sum = 0;
    for(int i=0; i < size; ++i ){
        sum += mark[i];
    }
    double average = sum/size;
    return average;
}
int main(){
    float marks[5];
    storeMark(marks, 6);
    displayMarks(marks, 6);
    cout<<"Average of mark is: "<<averageMarks(marks, 6);
    return 0;
}