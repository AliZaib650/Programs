#include <iostream>
using namespace std;

int main() {

    int num, digit;
    int reverse=0;
    cout << "Enter a number to reverse: ";
    cin >> num;

    do{
        digit = num%10;
        reverse= reverse*10 + digit;
        num/=10;

    }while (num!=0);

    cout << "Reverse of thre number is: " << reverse;
    
    return 0;
}