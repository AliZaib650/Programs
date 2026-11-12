
#include <iostream>
using namespace std;

double calculateFee(char type, int rate, int hours);
int gettype(char type);
void displayreceipt(char type, int hours, double fee);

int main()
{
    char type;
    int hours;
    int rate;
    double fee;

    cout << "Enter type (C, M, B): ";
    cin >> type;

    while(type != 'C' && type != 'M' && type != 'B')
    {
        cout << "Invalid type! Enter C, M, or B: ";
        cin >> type;
    }

    cout << "Enter number of hours parked: ";
    cin >> hours;

    while(hours <= 0)
    {
        cout << "Invalid hours! Enter again: ";
        cin >> hours;
    }

    rate = gettype(type);

    fee = calculateFee(type, rate, hours);

    displayreceipt(type, hours, fee);

    return 0;
}

int gettype(char type)
{
    int rate;

    switch(type)
    {
        case 'C':
            rate = 100;
            break;

        case 'M':
            rate = 50;
            break;

        case 'B':
            rate = 20;
            break;
    }

    return rate;
}

double calculateFee(char type, int rate, int hours)
{
    if(hours <= 2)
    {
        return rate;
    }
    else
    {
        if(type == 'C')
            return rate + (hours - 2) * 100;
        else if(type == 'M')
            return rate + (hours - 2) * 50;
        else
            return rate + (hours - 2) * 20;
    }
}

void displayreceipt(char type, int hours, double fee)
{
    cout << "\n----- PARKING RECEIPT -----" << endl;
    cout << "Vehicle Type: " << type << endl;
    cout << "Parking Hours: " << hours << endl;
    cout << "Total Parking Fee: Rs. " << fee << endl;
}
