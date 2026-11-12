#include <iostream>
using namespace std;

void signcheck(int num)
{
    if (num < 0)
    cout << "Number is negative ";
    else if (num == 0)
    cout << "Its a zero";
    else 
    cout << "Number is positive";
}

void evencheck(int num)
{
    if (num%2 == 0)
    cout << "Number is even ";
    else 
    cout << "Number is odd";
}
void primecheck(int num)
{
    for (int i=2; i<num; i++)
    {
        if (num%i == 0 || num == 2)
        cout<< "Number is not prime.";
        else
        cout << "Number is not prime.";
    }
}

void sum(int num)
{
    int sum = 0;
    for(int i=0; i<=num; i++)
    {
        sum = sum +i;
    }

    cout << "Sum of numbers till " << num << "is " << sum;
}

void factorial(int num)
{
    int fact = 1;
    for(int i=1; i<=num; i++)
    {
        fact = fact * i;
    }

    cout << "Factorial of " << num << " is " << fact;  
}

void reverse(int num)
{
    int rev = 0;
    while(num != 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    cout << "Reverse of the number is " << rev;
}

int main (){

    int choice;
    int n;

    cout << "NUMBER ANALYSIS SYSTEM: " << endl;
    cout << "1. Check if a number is positive or negative" << endl;
    cout << "2. Check if a number is even or odd" << endl;
    cout << "3. Check if a number is prime or not" << endl;
    cout << "4. find sum from 1 to n" << endl;
    cout << "5. find factorial of a number" << endl;
    cout << "6. reverse number "<< endl;

    cout << "Enter your choice (1-6): ";
    cin >> choice;

    cout << "Enter the number: ";
    cin >> n;

    switch(choice)
    {
        case 1:
        signcheck(n);
        break;
        case 2:
        evencheck(n);
        break;
        case 3:
        primecheck(n);
        break;
        case 4:
        sum(n);
        break;
        case 5:
        factorial(n);
        break;
        case 6:
        reverse(n);
        default:
        cout << "Invalid choice" << endl;
    }

    cout << "Thanks for using program!!";

    return 0;
}