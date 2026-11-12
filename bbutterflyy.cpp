#include <iostream>
using namespace std;

int main()
{
    int n=4;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<< "*";

        }
        for(int k=0; k<n-2*(i-1); k++)
        {
            cout<< " ";
        }
        for(int t=0; t<=i; t++)
        {
            cout<< "*";
        }
        cout << endl;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=n; j>i; j--)
        {
            cout<< "*";
        }
        for(int t=0; t<2*(i+2)-n; t++)
        {
            cout<< " ";
        }
        for(int k=n; k>i; k--)
        {
            cout<< "*";
        }
        cout<< endl;
    }

    return 0;
}