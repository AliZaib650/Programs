#include <iostream>
using namespace std;

int sum(int n)
{
    int sum=0;

    for(int i=0; i<=n; i++)
    {
        sum=sum+i;
    }
    return sum;
}
int main() {

    int num;

    cout<< "Enter the number: ";
    cin >> num;

    cout<< "Sum of numbers till " << num << " is: " << sum(num);
    
    return 0;
}

