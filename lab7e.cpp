#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    srand(time(0));

    int secret = rand() % 101;
    int guess;

    for(int i=0; i<5; i++)
    {
        cout << "Enter your guess: ";
        cin >> guess;
        if(guess==secret)
        {
            cout<< "CONGRATULATIONS!!";
            return 0;
        }
        else if(guess<secret)
        {
            cout<< "Your guess is too low" << endl;
        }
        else{
            cout<< "Your guess is too high" << endl;
        }
    }
    cout<< "The game is over, The number was: " << secret;
   

    return 0;
}