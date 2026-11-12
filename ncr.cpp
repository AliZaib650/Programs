#include <iostream>
using namespace std;

float ncr(int n, int r)
{
    int factorialn=1,
    factorialr=1,
    factorialn_r=1;

    for(int i=1; i<=n; i++)
    {
        factorialn=factorialn*i;
    }
    for(int i=1; i<=r; i++)
    {
        factorialr=factorialr*i;
    }
    for(int i=1; i<=(n-r); i++)
    {
        factorialn_r=factorialn_r*i;
    }
    float x=(factorialn)/((factorialr)*(factorialn_r));
    return x;
}

int main()
{
    cout << ncr(5, 2) << endl;
    cout << ncr(4, 4) << endl;
    cout << ncr(4, 3) << endl;
    cout << ncr(5, 1) << endl;
    cout << ncr(9, 2) << endl;



    return 0;
}