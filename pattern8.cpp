#include <iostream>
using namespace std;

int main ()
{
    int n=5;
    for(int i=0; i<n; i++)
    {
        for(int j=5; j>n-i; j--)
        {
            cout<< " ";
        }
        for(int s=0; s<n-i; s++)
        {
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;

    }

 