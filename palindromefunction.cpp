#include<iostream>
using namespace std;

int reverse(int num)
{
    int reverse=0;
    int digit;
    do{

        digit = num%10;
        reverse = reverse*10 + digit;
        num = num/10;
    }while(num!=0);

    return reverse;
}

bool isPalindrome(int  num)
{
    if(num==reverse(num))
    return true;
    else
    return false;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if(isPalindrome(num))
    cout << "Number is palindrome!!";
    else
    cout << "Number is not palindrome!!";

    return 0;
}