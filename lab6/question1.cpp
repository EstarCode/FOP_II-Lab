#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("employees.txt");
    if (!outfile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    
    outfile << "Callaway_G 6.00 40" << endl;
    outfile << "Hanson_P 5.00 48" << endl;
    outfile << "Lasard_D 6.50 35" << endl;
    outfile << "Stillman_W 8.00 50" << endl;

    outfile.close();
    cout << "Data written to file successfully!" << endl;

    return 0;
}