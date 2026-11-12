#include <iostream>
using namespace std;

int main()
{
    int sum=0;
    int n;

    cout<< " Enter a Number: " ;
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        sum=sum+i;
    }

    cout << "Sum of odd numbers to n is: " << sum << endl;
    
    return 0;
}