#include <iostream>
using namespace std;

void Receipt(char type, int  parkingduration, double& totalRevenue);
double getRate(char type);
double calculateFee(double rate,double parkingduration);
double Discount(int parkingduration, double parkingfee);
void updateRevenue(double parkingfee, double& totalRevenue);

int main()
{
    int n;
    double totalRevenue = 0;
    char type;
    int parkingduration;

    cout << "Welcome to the Parking Fee Calculator!" << endl;
    cout<< "Enter 0 to exit program, 1 to continue: ";
    cin >> n;


    while(n!=0){
    cout << "Enter type of vehicle (C for Car, M for Motorcycle, B for Bicycle): ";
    cin >> type;
        if(!(type == 'C' || type == 'M' || type == 'B')) {
            cout << "Invalid vehicle type entered. Please enter C, M, or B." << endl;
            continue;}

    cout << "Enter Parking Duration in hours: ";
    cin >> parkingduration;
    if (parkingduration<=0 || parkingduration >24){
    cout << "Invalid parking duration entered. Please enter a positive number/upto 24 hours." << endl;
    continue;}

    Receipt(type, parkingduration, totalRevenue);
    cout << endl;
    cout << "Welcome to the Parking Fee Calculator!" << endl;
    cout<< "Enter 0 to exit program, 1 to continue: ";
    cin >> n;
}

cout<< "Program exited. Total revenue collected: " << totalRevenue << endl;

    return 0;
}

void Receipt(char type, int  parkingduration, double& totalRevenue)
{
    double rate = getRate(type);
    double parkingfee = calculateFee(rate, parkingduration);
    double discount = Discount(parkingduration, parkingfee);

    double total = parkingfee - discount;
    
    cout << "----------------------------------------" << endl;
    cout << "Vehicle Type      : " << type << endl;
    cout << "Parking Duration  : " << parkingduration << " hours" << endl;
    cout << "----------------------------------------" << endl;
    cout << "Receipt is generated as follows: " << endl;
    cout << "----------------------------------------" << endl;
    cout << "Rate per hour    : " << rate << endl;
    cout << "parking fee      : "<< parkingfee << endl;
    cout << "discount applied : " << discount << endl;
    cout << "Total Fee is     : " << total << endl;
    cout << "----------------------------------------" << endl;

    updateRevenue(total, totalRevenue);

}

double getRate(char type)
{
    int Rate = 0;
    switch (type)
    {
        case 'C':
        Rate = 100;
        break;
        case 'M':
        Rate = 50;
        break;
        case 'B':
        Rate = 20;
        break;
        default:
        Rate = 0;
    }
    return Rate;

}
double calculateFee(double rate,double parkingduration)
{
    double parkingfee = rate * parkingduration;
    return parkingfee;
}
double Discount(int parkingduration, double parkingfee)
{
    double discount=0;
    if(parkingduration>8 && parkingduration <=12)
    {
        discount = 0.10*parkingfee;
    }
    else if(parkingduration>12 && parkingduration <=24)
    {
        discount = 200;
    }

     if(discount > parkingfee)
        {
            discount = parkingfee;
        }
    return discount;
}
void updateRevenue(double parkingfee, double& totalRevenue)
{
    totalRevenue += parkingfee;
}
