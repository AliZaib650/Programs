#include<iostream>
using namespace std;

int factorial(int n)
{
    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}

int main()
{
    int num;
    cout << "Enter a non negative integer: ";
    cin >> num;

    while(num<0)
    {
        cout << "Warning!! Invalid input!" << endl;
        cout << "Enter a non negative integer: ";
        cin >> num;
    }

    cout << "Factorial of " << num << " is " << factorial(num) << endl;


   return 0;
}