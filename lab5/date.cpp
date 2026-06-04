#include <iostream>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

Date larger(Date *d1, Date *d2) {
    if(d1->year > d2->year)
        return *d1;
    else if(d1->year < d2->year)
        return *d2;

    if(d1->month > d2->month)
        return *d1;
    else if(d1->month < d2->month)
        return *d2;

    if(d1->day > d2->day)
        return *d1;
    else
        return *d2;
}

int main() {
    Date d1, d2, result;

    cin >> d1.day >> d1.month >> d1.year;
    cin >> d2.day >> d2.month >> d2.year;
    result = larger(&d1, &d2);
    cout << result.day << "/" << result.month << "/" << result.year;

    return 0;
}