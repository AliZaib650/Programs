#include <iostream>
using namespace std;

int main()
{
    char ch='A';
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<i; j++)
        { cout << " ";}
        for(int s=0;s<4-i; s++)
       {cout<< ch;}
       cout << endl;
       ch++;
    }
    return 0;
}