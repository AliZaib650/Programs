#include <iostream>
using namespace std;
int main() {

    int n;
    int digits=0;
    cout << "Enter the number: ";
    cin >> n;

    do{
        n = n/10;
        digits++;
    }while(n!=0);

    cout << "number of digits are : " << digits;
    return 0;
}
