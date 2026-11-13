#include<iostream>
using namespace std;

int digits(int num)
{
    int digits=0;
    do{
         num = num/10;
        digits++;
       
    }while(num!=0);

    return digits;
}

int pow(int base, int exp)
{
    int result = 1;

    for (int i=1; i<=exp; i++){
        result = result * base;
    }
    return result;
}
bool armstrong(int num)
{
    int sum=0;
    int digit;
    int copynum = num;
    do{
        digit = copynum%10;
        sum = sum+(pow(digit, digits(num)));
        copynum = copynum/10;
    }while(copynum!=0);

    if(sum==num)
    {return true;}
    else
    {return false;}
}


int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (armstrong(n))
    cout << "Number is armstrong number";
    else
    cout << "Number is not armstrong number";


    return 0;
}