#include <iostream>
using namespace std;

void swap(int &a, int &b){
int temp=a;
a=b;
b=temp;
}
int main()
{

    int a, b;
    cout<< "Enter the two numbers: ";
    cin >> a >> b;
    cout << "Before Swap"<< endl;
    cout << "First num is: " << a << " and second num is: " << b;
    swap(a,b);
    cout << endl << "NOW AFTER SWAP" << endl;
    cout << "First num is: " << a << " and second num is: " << b;

    return 0;
}