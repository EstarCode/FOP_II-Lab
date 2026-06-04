#include <iostream>
#include <cmath>
using namespace std;

template <class T>
double euclideanDistance(T x1, T y1, T x2, T y2)
{
    return sqrt((x2 - x1) * (x2 - x1) +
                (y2 - y1) * (y2 - y1));
}

int main()
{
    double dx1, dy1, dx2, dy2;
    int ix1, iy1, ix2, iy2;

    cout << "Enter double point 1 (x1 y1): ";
    cin >> dx1 >> dy1;
    cout << "Enter double point 2 (x2 y2): ";
    cin >> dx2 >> dy2;
    cout << "Distance for double points = "
         << euclideanDistance(dx1, dy1, dx2, dy2)
         << endl;

    cout << "\nEnter integer point 1 (x1 y1): ";
    cin >> ix1 >> iy1;

    cout << "Enter integer point 2 (x2 y2): ";
    cin >> ix2 >> iy2;

    cout << "Distance for integer points = "
         << euclideanDistance(ix1, iy1, ix2, iy2)
         << endl;

    return 0;
}