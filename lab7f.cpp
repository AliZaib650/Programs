#include <iostream>
using namespace std;

int product(int a, int b, int c=1, int d=1, int e=1)
{
    return a*b*c*d*e;
}

int main()
{
    int n,a,b,c,d,e;

    cout << "Enter number of integers from 2 to 5: ";
    cin >> n;

    if(n<2 || n>5)
    {
        cout<< "Invalid number!";
        return 0;
    }

    cout << "Enter " << n <<" integers: ";
    cin>> a >> b;
    if(n==3)
    {cin>> c;}
    if(n==4)
    {cin >> c >> d;}
    if(n==5)
    {cin >> c >> d >> e;}

    switch(n)
    {
        case 2:
        cout<< "Product is: " << product(a,b);
        break;
        case 3:
        cout<< "Product is: " << product(a,b,c);
        break;
        case 4:
        cout<< "Product is: " << product(a,b,c,d);
        break;
        case 5:
        cout<< "Product is: " << product(a,b,c,d,e);
        break;
    }

    return 0;
}