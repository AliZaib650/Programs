#include <iostream>
using namespace std;

int main()
{
    int start;
    int end;

    cout << "Enter the starting number: ";
    cin >> start;   
    cout << "Enter the ending number: ";
    cin >> end;
    if (start > end || start < 0 || end < 0 || start == end)
    {
        cout << "Invalid range. Starting number should be less than or equal to ending number." << endl;
    }
    else
    {for(int i=start; i<=end; i++)
    {
        bool isPrime = true;
        for(int j=2; j<i; j++)
        { 
            if(i%j == 0)
            {isPrime = false; break; }
        }
        if(isPrime)
        {
            cout << i << " is a prime number" << endl;
        }
        }}
        return 0;
    }

   
