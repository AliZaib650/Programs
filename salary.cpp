#include <iostream>
using namespace std;


void displaySalarySLip(string name, double basicSalary, int overtime, int experience);
double calculatebonus(double basicSalary, int experience);
double calculateOvertimePay(int overtime);
double calculateTotalSalary(double basicSalary, double bonus, double overtimePay);
double calculateTax(double totalSalary);

int main() 
{
    string name;
    double basicSalary;
    int overtime, experience;


    cout<< "Enter your name: ";
    cin >> name;
    cout<< "Enter your basic salary: ";
    cin >> basicSalary;
    if(basicSalary<=0)
    {
        cout<< "Invalid basic salary. Please enter a positive value." << endl;
        return 0;
    }
    cout<< "Enter your overtime hours: ";
    cin >> overtime;
    if(overtime < 0)
    {
        cout<< "Invalid overtime hours. Please enter a non-negative value." << endl;
        return 0;
    }
    cout<< "Enter your years of experience: ";
    cin >> experience;
    if(experience < 0)
    {
        cout<< "Invalid years of experience. Please enter a non-negative value." << endl;
        return 0;
    }

    displaySalarySLip(name, basicSalary, overtime, experience);

    return 0;
}
void displaySalarySLip(string name, double basicSalary, int overtime, int experience)
{
    double bonus = calculatebonus(basicSalary, experience);
    double overtimePay = calculateOvertimePay(overtime);
    double totalsalary = calculateTotalSalary(basicSalary, bonus, overtimePay);
    double tax = calculateTax(totalsalary);
    totalsalary = totalsalary - tax;


    cout<< "----------------------------------------" << endl;
    cout<< "Salary Slip for: " << name << endl;
    cout<< "Basic Salary   : " << basicSalary << endl;
    cout<< "Overtime Pay   : " << overtimePay << endl;
    cout<< "Bonus          : " << bonus << endl;
    cout<< "Tax Deducted   : " << tax << endl;
    cout<< "Total Salary   : " << totalsalary << endl;
    cout<< "----------------------------------------" << endl;
}
double calculatebonus(double basicSalary, int experience)
 {
    if(experience >=5 && experience <10)
    {
        return basicSalary * 0.10;
    }
    else if(experience >=10)
    {
        return basicSalary * 0.15;
    }

    return 0;
 }
  double calculateOvertimePay(int overtime)
  {
    int overtimePay = overtime * 500;
    return overtimePay;
  }
  double calculateTotalSalary(double basicSalary, double bonus, double overtimePay)
  {
    double totalSalary = basicSalary + bonus + overtimePay;
    return totalSalary;
  }
  double calculateTax(double totalSalary)
  {
    if(totalSalary > 100000)
    {
        return 0.05 * totalSalary;
    }
    return 0;
  }



