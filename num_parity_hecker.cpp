#include<iostream>
using namespace std;

bool isEven(int num)
{
    if (num%2==0)
    return true;
    else
    return false;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(isEven(n))
    cout<< "Number is even!";
    else
    cout<< "Number is odd!";
    return 0;
}