#include <iostream>
using namespace std;

int main() {
    int num, digit, largest=0;
    cout << "Enter a number : ";
    cin >> num;

    do{
        digit = num%10;
        if(digit >= largest)
            largest = digit;
        
        num=num/10;
     } while(num!=0);

    cout << "The largest digit is : " << largest << '\n';

    return 0;
}
