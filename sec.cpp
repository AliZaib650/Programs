#include <iostream>
using namespace std;

int main()
{
    int guess;
    int attempts=0;
    int n=4;

    cout<< " I have chosen a number between 1 and 10, Try to guess it " << endl;
    cout<< "Your guess: ";
    cin >> guess;

    while(guess!=n)
    {
        attempts++;
        cout << "This is incorrect, Try again: ";
        cin >> guess;
    }
    attempts++;
    cout << "Correct guess! You took " << attempts << " attempts." << endl;
    return 0;
}