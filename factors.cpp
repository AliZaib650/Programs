#include<iostream>
using namespace std;

int factors(int num)
{
     int factors=0;
    for(int i=1; i<=num; i++)
    {
        if(num%i==0)
        {
            factors++;
        }
}

return factors;
}

int main()
{
    int num;
   

    cout<< "Enter a number: ";
    cin >> num;

    cout<< "Number of factors of " << num << " are " << factors(num);
    return 0;
}