#include <iostream>
#include <string>
using namespace std;

class Product
{
private:
    string name;
    float cost;
    int quantity;

public:
    void getData()
    {
        cout << "Enter Product Name: ";
        cin >> name;
        cout << "Enter Cost: ";
        cin >> cost;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }


    void DispData()
    {
        cout << "\nProduct Name: " << name << endl;
        cout << "Cost: " << cost << endl;
        cout << "Quantity: " << quantity << endl;
    }


    float calcRevenue()
    {
        return cost * quantity;
    }


    float calcTax()
    {
        return calcRevenue() * 0.15;
    }

    
    float calcProfit()
    {
        return calcRevenue() - calcTax();
    }
};

int main()
{
    Product p[3];


    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter details for Product " << i + 1 << endl;
        p[i].getData();
    }

    for (int i = 0; i < 3; i++)
    {
        cout << "\n \tProduct " << i + 1 << "\t";
        p[i].DispData();
        cout << "Revenue: " << p[i].calcRevenue() << endl;
        cout << "Tax (15%): " << p[i].calcTax() << endl;
        cout << "Profit: " << p[i].calcProfit() << endl;
    }

    return 0;
}