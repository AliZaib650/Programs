#include <iostream>
using namespace std;

int average(int n)
{
    int sum=0;
    int average=0;

    for(int i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    average = (double)sum/n;
    return average;
}
int main() {

    int num;

    cout<< "Enter the number: ";
    cin >> num;

    cout<< "average of numbers till " << num << " is: " << average(num);
    
    return 0;
}

