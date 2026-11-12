#include<iostream>
using namespace std;

bool perfect(int n)
{
    int sum=0;
    bool isPrefect= false;
    for(int i=1; i<n; i++)
    {
        if(n%i==0)
        sum=sum+i;
    }
    if(sum==n || n==1)
    {
        isPrefect=true;
    }

    return isPrefect;

}

int main()
{
    int num;
    cout<< "Enter a number: ";
    cin >> num;
    
    if(perfect(num))
    {cout << "Number is prefect!";}
    else
    {cout << "number is not prefect!";}
    return 0;
}