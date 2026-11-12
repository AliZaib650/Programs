#include<iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

double monthlyPayment = 1345.4567;
 double totalPayment = 866.887234;
  cout << setprecision(7); 
  cout << monthlyPayment << endl; 
  cout << totalPayment << endl;
  cout << fixed << setprecision(2); 
  cout << setw(8) << monthlyPayment << endl;
  cout << setw(8) << totalPayment << endl; 
  cout << left; 
  cout << setw(8) << monthlyPayment << endl;
  cout << setw(8) << totalPayment << endl; 
  cout << right;
  cout << setw(8) << monthlyPayment << endl; 
  cout << setw(8) << totalPayment << endl; 

  return 0;
}