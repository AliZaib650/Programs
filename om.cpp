#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, i=0;
    float price, lowPrice;
    string name, lowName;

    cout << "Enter number of items: ";
    cin >> n;
    
    
    do {
        cout<< "Enter items name: ";
        cin >> name;
        cout<< "Enter items price: ";
        cin >> price;
        if (i == 0 || price < lowPrice)
        {
            lowName = name;
            lowPrice = price;
        }
    
        i++;
    }while(i<n);

    cout<< "Name of low item is: " << lowName << endl;
    cout<< "The price of lowName: " << lowPrice << endl;

    return 0;
}