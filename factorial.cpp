#include <iostream>
using namespace std;

int main()
{
    int factorial = 1;
    int n;
    cout << "Enter a  Number:";
    cin >>n;
    if(n>=0)
    {
        for(int i=1; i<=n; i++)
        {
          factorial = factorial*i;
        }
        cout<< "Factorial of entered number is: " << factorial << endl;
    }
    else
      {
        cout<< "Enter a positive number, Factorial is not defined for a NEGATIVE number";
      }
    return 0;
}