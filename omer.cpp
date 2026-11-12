#include <iostream>
using namespace std;

int main()
{
    int annual_sales;
    double annual_bonus;

    cout<< "Enter your annual sales: ";
    cin>> annual_sales;
    
    if(annual_sales>15000)
    {  
        annual_bonus=annual_sales+annual_sales*0.02; 
    }
    else 
    {  
        annual_bonus=annual_sales+annual_sales*0.015; 
    }
    cout<< "Your annual bonus is: " << annual_bonus << endl;
    return 0;
}