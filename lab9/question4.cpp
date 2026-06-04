#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> histogram;
    int number;
    cout << "Enter positive integer  (-1 to stop):\n";
    while (true)
    {
        cin >> number;
        if (number == -1)
        {
            break;
        }
        if (number > 0)
        {
            histogram[number]++;
        }
    }
    cout << "\nNumber\tOccurs\n";
    for (auto x : histogram)
    {
        cout << x.first << "\t"
             << x.second << endl;
    }
    return 0;
}