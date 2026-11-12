#include <iostream>
using namespace std;


int min(int a,int b)
{
    if(a<b)
    {return a;}
    else
    {return b;}
}

int main()
{
    int a,
    b;
    cout<< "Enter two numbers: ";
    cin >> a >> b; 
    cout<< min(a,b);


   return 0;
}