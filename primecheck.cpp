#include <iostream>
using namespace std;

bool isPrime(int n)
{
    bool isPrime = true;
    for(int i=2; i<n; n++)
    {
        if(n%i==0)
        {
            isPrime = false;
        }
    }
    return isPrime;
}

int main()
{
    int num;
    cout<< "Enter a number: ";
    cin >> num;

    if(isPrime(num))
    cout<< "Number is prime";
    else
    cout<< "Number is not prime";

    return 0;
}