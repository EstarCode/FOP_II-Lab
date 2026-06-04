#include <iostream>
#include <fstream>
#include "student.h"
using namespace std;

void getRecord(Student &student) {
    cout << "Enter Student ID: ";
    cin >> student.id;
    cin.ignore();
    cout << "Enter Student Name: ";
    getline(cin, student.name);
    cout << "Enter Student Age: ";
    cin >> student.age;
}

void displayRecord(const Student &student) {
    cout << "Student ID: " << student.id << endl;
    cout << "Student Name: " << student.name << endl;
    cout << "Student Age: " << student.age << endl;
}

int main() {
    int N;
    cout << "Enter the number of students: ";
    cin >> N;

    ofstream outFile("Test.txt");

    Student student;
    for (int i = 0; i < N; ++i) {
        cout << "Enter details for student " << i + 1 << endl;
        getRecord(student);
        outFile << student.id << "\n" << student.name << "\n" << student.age << "\n";
    }
    outFile.close();

    ifstream inFile("Test.txt");
    cout << "\nStudent Records from file:" << endl;
    while (inFile >> student.id) {
        inFile.ignore();
        getline(inFile, student.name);
        inFile >> student.age;
        inFile.ignore();

        displayRecord(student);
    }
    inFile.close();
    return 0;
}