#include<iostream>
using namespace std;

int fact(int num)
{
int fact = 1;
for(int i=1; i<=num; i++)
{
    fact = fact*i;
}  

return fact;
}

bool isStrong(int n)
{
    int copyn = n;
    int sum = 0;
    int digit;
    do{
    digit = copyn % 10;
    sum = sum + fact(digit);
    copyn= copyn/10;
    }while(copyn!=0);

    if(sum==n)
    return true;
    else
    return false;

}
int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if(isStrong(num))
    {
        cout<< "The number is strong!!";
    }
    else
    {
        cout << "Number is not strong!!";
    }
    return 0;
}