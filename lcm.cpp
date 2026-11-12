#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    int largest, smallest;
    int hcf=1;

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
    
   int lcm = (num1*num2)/hcf;
 
   cout<< "the least common multiple is: " << lcm;

   return 0;
}