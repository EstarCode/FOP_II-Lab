#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

struct Student
{
    int id;
    string name;
    int age;
};

void getRecord(Student &student);
void displayRecord(const Student &student);

#endif