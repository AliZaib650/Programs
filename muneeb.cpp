#include <iostream>
using namespace std;

int main()
{
    int product_number;
    int quantity;
    double price;
    double total;

    cout << "Enter product number: ";
    cin >> product_number;
    cout << "Enter quantity: ";
    cin >> quantity;

    switch (product_number)
    {
        case 1:
            price = 2.98;
            break;
        case 2:
            price = 4.50;
            break;
        case 3:
            price = 9.98;
            break;
        case 4:
            price = 4.49;
            break;
        case 5:
            price = 6.87;
            break;
        default:
            cout << "Invalid product number." << endl;
    }
    total = price * quantity;
        if(quantity>5)
        {
            total = total - (total * 0.10);
        }
    cout << "Total amount owed: $" << total << endl;
    
    return 0;
}