#include <iostream>
using namespace std;

int main()
{
    int n=5;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i; j++)
        {
            cout << "*";
        }
        for(int t=0; t<i; t++)
        {
            cout<< " ";
        }
        for(int t=0; t<i; t++)
        {
            cout<< " ";
        }
        for(int k=0; k<n-i; k++)
        {
            cout << "*";
        }
        cout<< endl;
    }

    for(int i=0; i<n; i++)
    {
        for (int j=0; j<=i; j++) 
        {
            cout << "*";
        }
        for(int t=0; t<n-i-1; t++)
        {
            cout<< " ";
        }
        for(int s=0; s<n-i-1; s++)
        {
            cout<< " ";
        }
        for(int t=0; t<=i; t++)
        {
            cout << "*";
        }
        cout<< endl;
    }
}