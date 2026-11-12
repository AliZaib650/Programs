#include<iostream>
using namespace std;

int main()
{
    int a;
    cout << "Enter a positive number: ";
    cin >> a;

    if(a>0)
    {
        if(a%2==0)
        {
            if(a%4==0 && a%6==0)
                {cout<< "Number is even and divisible by 4 and 6.";}
            else
                {cout<< "Number is even but is not divisible by 4 and 6.";}
        }
        else if(a%2==1)
        { 
            if(a%3==0 && a%5==0)
                {cout<< "Number is odd and divisible by 3 and 5.";}
            else
                {cout<< "Number is odd but is not divisible by 3 and 5.";}
        }
    }
    else
    {cout<< "You entered an invalid number, Please enter a positive number.";}

    return 0;
}