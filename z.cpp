#include <iostream>       // this is preprocessor directive
#include <string>
using namespace std;            // using standard library

int main()
{
    string employee_name, employee_id;          // declaring variables
    float basic_salary;
    float house_allowance;
    float transport_allowance;                  // declaring variables for allowance.
    float medical_allowance; 
    float gross_salary;
    float tax;
    float net_salary;

    cout << "Enter employee name: ";         // taking input from user
    getline (cin,employee_name);
    cout << "Enter employee ID: ";
    cin >> employee_id;
    cout << "Enter basic salary: ";
    cin >> basic_salary;
    
    house_allowance = 0.2 * basic_salary;     // calculting allowances
    medical_allowance = 0.1 * basic_salary;
    transport_allowance = 0.05 * basic_salary;
    gross_salary = basic_salary + house_allowance + medical_allowance + transport_allowance;
    tax = 0.05 * gross_salary;         // calculating gross salary, tax, etc
    net_salary = gross_salary - tax;

    cout << "----------Salary Slip----------" << endl;                  // printing salary slip
    cout << "Employee Name       : " << employee_name << endl;
    cout << "Employee ID         : " << employee_id << endl;
    cout << "Basic Salary        : " << basic_salary << endl;
    cout<< " Allowances: " << endl;                                      // printnig allownaces
    cout << "House Allowance     : " << house_allowance << endl;
    cout << "Medical Allowance   : " << medical_allowance << endl;
    cout << "Transport Allowance : " << transport_allowance << endl;
    cout << "Gross Salary        : " << gross_salary << endl;
    cout << "Tax                 : " << tax << endl;                         // printing tax and net salary
    cout << "Net Salary          : " << net_salary << endl; 
    cout << "-------------------------------";

    return 0;

}