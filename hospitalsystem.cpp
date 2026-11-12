#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void displayBill(string name,char type,int days,int tests,int doctors, double& revenue);
double getrate(char type);
double roomcharge(int days, double rrate);
double medicalcharges(int tests, int doctors);
double discount(double roomcharges, int days);
void updateRevenue(double Billcharges, double& revenue);


int main()
{
    string name;
    char type;
    int days = 0;
    int tests = 0;
    int doctors = 0;
    int n = 0;
    double revenue = 0;
    int passcode = 804650;
    int passcodeEntered = 0;

    cout << "WELCOME TO HOSPITAL PATIENT BILLING SYSTEM!!" << endl;
    cout << "Press 0 to exit, 1 to enter program! ";
    cin >> n;

    

    while(n!=0)
    {cout << "Enter patient name: ";
    cin >> name;
    cout << "Enter Room Type(\n1. G for General Ward\n2. P for Private Room\n3. L for Lurury room): ";
    cin >> type;
    if (!(type == 'G' || type == 'P'|| type == 'L'))
    { cout << "INVALID INPUT!!! Enter a valid type of room.";
    continue;
}

    cout << "Enter number of days since admitted : ";
    cin >> days;

    if(days < 0)
    {cout << "INVALID INPUT!!! Enter valid number of days.";
    continue;}

    cout << "Enter number of medical test done: ";
    cin >> tests;

    if(tests < 0)
    {cout << "INVALID INPUT!!! Enter valid number of test!";
    continue;}

    cout << "Enter nubmer of doctors consulted: ";
    cin >> doctors;

    if(doctors < 0)
    {cout << "INVALID INPUT!!! Enter valid numbers of doctors consulted.";
    continue;}

    displayBill(name, type, days, tests, doctors, revenue);

    cout << "Press 0 to exit, 1 to enter program! ";
    cin >> n;
    cin.ignore();
    }

    cout << "Program stopped succesfully!! " << endl;

    cout << "If you are an admin, enter 1 to view Revenue, OR enter 0 to exit program: " ;
    cin >> n;

    if(n!=0)
    {
    cout << "Enter Password to view the total Revenue: ";
    cin >> passcodeEntered;
    if (passcodeEntered == passcode)
    {
        cout << "Revenue: " << revenue << endl;
    }
    }
    else

    cout << "Thanks for using usss!!! "<< endl;
    return 0;
}
void displayBill(string name,char type,int days,int tests,int doctors,double& revenue)
{
    double rrate = getrate(type);
    double roomcharges = roomcharge(days, rrate);
    double discountapplied = discount(roomcharges, days);
    double medicalcharge = medicalcharges(tests, doctors);

    double total = (roomcharges- discountapplied) + medicalcharge;
    updateRevenue(total , revenue);

    cout <<"--------------------------------------------------" << endl;
    cout << "   The Patient Bill is Generated as follows :- " << endl;
    cout <<"-------------------------------------------------" << endl;
    cout << "Patients name                          : " << name << endl;
    cout << "Room Type                              : " << type << endl;
    cout << "Number of days of stay                 : " << days << endl;
    cout << "Room rate per day                      : " << rrate << endl;
    cout << "Room Charges are                       : " << roomcharges << endl;
    cout << "Discount applied to Room charges(only) : " << discountapplied << endl;
    cout << "Medical Charges                        : " << medicalcharge << endl;
    cout << "TOTAL PAYABLE BILL IS                  : " << total << endl;
}
double getrate(char type)
{
    double rate=0;
    switch(type)
    {
        case 'G':
        rate = 2000;
        break;
        case 'L':
        rate = 8000;
        break;
        case  'P':
        rate = 5000;
        break;
    }

    return rate;
}

double roomcharge(int days, double rrate)
{
    double rate = days * rrate;
    return rate;
}
double medicalcharges(int tests, int doctors)
{
    double trate = 800;
    double drate = 1500;

    double tcharges = trate * tests;
    double dcharges = drate * doctors;
    double total = tcharges + dcharges;
    return total;
}

double discount(double roomcharges, int days)
{
    double discount = 0;
    if(days >=10)
    {
        discount = roomcharges * 0.10;
    }
    else if(days >=5)
    {
        discount = roomcharges * 0.05;
    }
    return discount;
}
void updateRevenue(double Billcharges, double& revenue)
{
    revenue = revenue + Billcharges;
}






