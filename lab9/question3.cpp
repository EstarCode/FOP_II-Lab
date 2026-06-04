#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s1, s2, s3;
    s1.insert(1);
    s1.insert(2);
    s1.insert(3);

    s2.insert(3);
    s2.insert(4);
    s2.insert(5);

    cout << "Set s1: ";
    for (int x : s1)
    {
        cout << x << " ";
    }

    cout << endl;
    cout << "Set s2: ";
    for (int x : s2)
    {
        cout << x << " ";
    }

    cout << endl;
    s3 = s1;
    s3.insert(s2.begin(), s2.end());
    cout << "Union of s1 and s2: ";
    for (int x : s3)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}