#include<iostream>
using namespace std;

int main()
{
    int num[5];

    for(int i=0; i<5; i++)
    {
        cout << "Enter number " << i+1 << ":  ";
        cin >> num[i];
    }

    cout << "Numbers you Entered : ";

    for(int i=0; i<5; i++)
    {
        cout << num[i] << " ";
    }

    cout << endl << "In reverse order : ";
    
    for(int i=4; i>=0; i--)
    {
        cout <<  num[i] << " ";
    }
    return 0;
}