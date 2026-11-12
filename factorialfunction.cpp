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
    cout<< factorial(0)<< endl;
    cout<< factorial(1)<< endl;
    cout<< factorial(2)<< endl;
    cout<< factorial(4)<< endl;
    cout<< factorial(6)<< endl;


   return 0;
}