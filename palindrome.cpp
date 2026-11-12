#include<iostream>
using namespace std;

int main()
{
    int num;
    int reverse=0;
    int digit;
    int numcopy;

    cout << "Enter a number: ";
    cin >> num;
    numcopy=num;
    do{

        digit = num%10;
        reverse = reverse*10 + digit;
        num = num/10;
    }while(num!=0);

    if(numcopy==reverse)
    cout<< "number is palindrome!!";
    else
    cout<< "number is not palindrome!!";

    return 0;
}