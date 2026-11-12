#include <iostream>
using namespace std;

void analyzeNumber(int num);
digitsprocess(int& copynum, int& largest, int& smallest, int& count, int& evenCount, int& oddCount, int& sum, int& reverse);
bool isPalindrome(int num);
bool isArmstrong(int num);
bool isPrime(int num);
int main()
{
    int num;
    cout<< "Enter a number and we will analyze it for you;" << endl;
    cout<< "And will find following things for you:" << endl;
    cout<< "1. Largest digit in the number." << endl;
    cout<< "2. Smallest digit." << endl;
    cout<< "3. Sum of all digits in the number." << endl;
    cout<< "4. Count of digits in the number." << endl;
    cout<< "5. Count even digits." << endl;
    cout<< "6. Count odd digits." << endl;
    cout<< "7. Reverse of the number." << endl;
    cout<< "8. Palindrome or not." << endl;
    cout<< "9. Armstrong number or not." << endl;
    cout<< "10. Prime number or not." << endl;
    cout<< "Enter the number: ";
    cin>> num;

    if(num<0)
    {
        cout<< "Invalid number. Please enter a positive value." << endl;
        return 0;
    }

    analyzeNumber(num);

}
void analyzeNumber(int num)
{
    int copynum = num;
    int reverse;
    int largest=0, smallest=9, count=0, evenCount=0, oddCount=0, reverse=0;
    int sum=0;
    digitsprocess(copynum, largest, smallest, count, evenCount, oddCount, sum, reverse);
    bool palindrome = isPalindrome(num);
    bool armstrong = isArmstrong(num);
    bool prime = isPrime(num);

    cout<< "Analysis of the number: " << num << endl;
    cout<< "Largest digit: " << largest << endl;
    cout<< "Smallest digit: " << smallest << endl;
    cout<< "Sum of digits: " << sum << endl;
    cout<< "Count of digits: " << count << endl;
    cout<< "Count of even digits: " << evenCount << endl;
    cout<< "Count of odd digits: " << oddCount << endl;
    cout<< "Reverse of the number: " << reverse << endl;
    cout<< "Is palindrome: " << (palindrome ? "Yes" : "No") << endl;
    cout<< "Is Armstrong: " << (armstrong ? "Yes" : "No") << endl;
    cout<< "Is Prime: " << (prime ? "Yes" : "No") << endl;  

}
digitsprocess(int& copynum, int& largest, int& smallest, int& count, int& evenCount, int& oddCount, int& sum, int& reverse)
{
    do{
    int digit = copynum % 10;
    if(digit > largest)
    largest = digit;
    if(digit < smallest)
    smallest = digit;
    sum += digit;
    count++;
    if(digit % 2 == 0)
    evenCount++;
    else
    oddCount++;
    reverse = reverse * 10 + digit;
    copynum /= 10;}
    while(copynum != 0);
}
// will continue after some time

