#include <iostream>
#include <iomanip>
using namespace std;

struct Date {
    int date, month, year;
};

struct Student {
    int roll;
    string name;
    float marks[5];
    float avg;
    Date dob;
};

void get_detail(Student &s) {
    cout << "Roll: "; 
    cin >> s.roll;
    cout << "Name: ";
    cin >> s.name;
    cout << "DOB (dd mm yyyy): ";
    cin >> s.dob.date >> s.dob.month >> s.dob.year;

    for (int i = 0; i < 5; i++) {
        cout << "Mark " << i + 1 << ": ";
        cin >> s.marks[i];
    }
}

void computeAvg(Student &s) {
    float sum = 0;
    for (int i = 0; i < 5; i++){
        sum += s.marks[i];
    }
    s.avg = sum / 5;
}

void display(Student s[]) {
    cout << "\nRoll  Name     DOB         Avg\n";
    for (int i = 0; i < 3; i++) {
        cout << s[i].roll << "   " << s[i].name << "   "
             << s[i].dob.date << "/" << s[i].dob.month <<"/" << s[i].dob.year
             << "   " << s[i].avg << endl;
    }
}

void below50(Student s[]) {
    cout << "\nRoll   Name   Avg\n";
    for (int i = 0; i < 2; i++) {
        if (s[i].avg < 50) {
            cout << s[i].roll << "   " << s[i].name << "   " << s[i].avg << endl;
        }
    }
}

int main() {
    Student s[2];

    for (int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << endl;
        get_detail(s[i]);
        computeAvg(s[i]);
    }

    display(s);
    below50(s);

    return 0;
}