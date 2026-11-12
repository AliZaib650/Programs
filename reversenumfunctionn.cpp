#include <iostream>
using namespace std;

int reverse(int a)
{
    int digit, reverse=0;
    do{
        digit = a%10;
        reverse=reverse*10+digit;
        a=a/10;
    }while(a!=0);

    return reverse;
}

int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Reverse of " << num << "is " << reverse(num);

    return 0;
}
