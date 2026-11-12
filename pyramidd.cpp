#include <iostream>
using namespace std;

int main()
{ 
    int n=4;
    for(int i=0; i<n; i++)
    {
        for(int j=n-i-1; j>0; j--)
        {
             cout << " ";
            }
        for(int s=0;s<i+1; s++)
       {
            cout<< s+1;
       }
       for(int k=i; k>0 ;k--)
       {
        cout<< k ;
    }
       cout << endl;
    }
    return 0;
}