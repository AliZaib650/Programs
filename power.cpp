#include<iostream>
using namespace std;

int pow(int a, int b)
{
   int power=1;
   for(int i=0; i<b; i++)
   {
    power=power*a;
   }
   return power;
}
int main()
{
    int base;
    int exp;

    cout<< "Enter base and exponent respectively: ";
    cin >> base >> exp;

    cout<< "Answer: " << pow (base, exp);

    return 0;
}