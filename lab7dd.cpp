#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number between 1 and 9: ";
    cin >> num;

    int n = num;

    for(int i=1; i<=n; i++)
    {
        cout<< i << " ";
        for(int j=1; j<=9; j++)
        {
             cout<< setw(4) << i * j ;
        }
        num++;
        cout << endl;
    }

    return 0;
}