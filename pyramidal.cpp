#include <iostream>
using namespace std;

int main()
{

    int n=4;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++) // spaces
        {
            cout<< " ";
        }
        for(int j=0; j<=i; j++)
        {
            cout<< j+1;
        }
        for(int t=i; t>0; t--)
        {
            cout<< t;
        }
        cout<< endl;
    }
}