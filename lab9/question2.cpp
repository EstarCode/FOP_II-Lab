#include <iostream>
#include <vector>
using namespace std;

template <class T>
T findLargestElement(vector<T> v)
{
    T largest = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] > largest)
        {
            largest = v[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> numbers;
    int n, value;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        numbers.push_back(value);
    }
    cout << "Largest Element = "
         << findLargestElement(numbers)
         << endl;

    return 0;
}