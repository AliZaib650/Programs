#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    int largest, smallest;
    int hcf;

    cout<< "Enter two numbers: ";
    cin >> num1 >> num2;

    if(num1>num2)
    {
        largest = num1;
        smallest= num2;
    }
    else {
        largest  = num2;
        smallest = num1;
    }


    for(int i=1;i<=smallest; i++)
    {
        if (smallest%i==0 && largest%i==0)
        {hcf = i;
        }
    }
    
    cout<< "The highest common factor of two numbers is: " << hcf;

   return 0;
}