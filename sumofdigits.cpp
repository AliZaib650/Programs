#include <iostream>
using namespace std;

int main() {

    long n;
    long digit;
    long sum=0;

    cout<< "enter a number: ";
    cin >> n;

    do{
        digit=n%10;
        sum = sum + digit;
        n=n/10;

    }while (n!=0);

    cout<< "sum is: " << sum;
    

    return 0;
}