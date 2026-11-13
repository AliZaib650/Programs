#include <iostream>
using namespace std;

int main()
{
    int units; 
    int ppu;
    int totalBill;
    int remaining;
    
    cout << "Enter the number of units consumed: ";
    cin >> units;

    if(units<=100)
        { ppu=10;
          totalBill=units*ppu;
    }
    else if(units<=200)
        { ppu=15;
          remaining=units-100;
          totalBill=100*10 + remaining*15;
        }
    else
    {     ppu=20;
          remaining=units-200;
          totalBill=100*10+100*15+remaining*20;
    }
    
    if(totalBill>1000)
    {
        totalBill=totalBill+totalBill*0.1;
    }
    cout<<"--------------------------------"<< endl;
    cout<< "----------BILL SUMMARY---------" << endl;
    cout<< "Units consumed: " << units << endl;
    cout<< "Total bill: " << totalBill << endl;
    cout<<"--------------------------------"<< endl;
    return 0;
}
