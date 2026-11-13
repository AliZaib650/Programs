#include <iostream>
using namespace std;

double calcBill(int units);
double finalBill(int units);
void printBill();
int main()
{
    printBill();
    return 0;
}

double calcBill(int units)
{
    double BaseBill = 0.0;
    if(units <=200)
    {
        BaseBill = units * 15;
    }
    else if(units <=500)
    {
        BaseBill = 200 * 15 + (units - 200) * 25;
    } 
    else if(units >500)
    {
        BaseBill = 200 * 15 + 300 * 25 + (units - 500)* 35;
    }

    return BaseBill;
}

double finalBill(int units)
{
    double total = calcBill(units);
    total = total + 400;
    if( total > 20000)
    {
        total = total + total * 0.10;
    }
    return total;
}

void printBill()
{
    cout<<  "UNITS(KWh):\tTotal Bill(Rs.)" << endl;
    for (int i=200; i<=1000; i = i + 200)
    {
        cout << i << "\t\t" << finalBill(i) << endl;
    }
}
