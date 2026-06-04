#include <iostream>
#include <vector>
using namespace std;

template <typename T>
bool palindrome(vector<T> v)
{
    int start = 0;
    int end = v.size() - 1;
    while (start < end)
    {
        if (v[start] != v[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    vector<int> numbers;
    int n, value;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter numbers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        numbers.push_back(value);
    }
    if (palindrome(numbers))
    {
        cout << "Vector is a palindrome" << endl;
    }
    else
    {
        cout << "Vector is not a palindrome" << endl;
    }
    return 0;
}