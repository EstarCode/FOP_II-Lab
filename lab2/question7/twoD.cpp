#include<iostream>
using namespace std;
void generateTable(int table[][], int row, int col ){
    for (int i=0; i<row; ++i ){
        for(int j=0; j<col; ++j){
            table[i][j] = (i+1)*(j+1);
        }
    }
}
void displayTable(int table[][20], int row, int col){
    for(int i=0; i<row; ++i){
        for(int j=0; j< col; ++j){
            cout<<table[i][j]<<" ";
        }
    cout<<endl;
    }
}
int main(){
    int x, y;
    cout<<"enter row: ";
    cin>>x;
    cout<<"enter column: ";
    cin>>y;
    int table[20][20];
    generateTable(table, x, y);
    displayTable(table, x, y);
    return 0;
}