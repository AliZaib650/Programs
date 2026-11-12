#include <iostream>
using namespace std;

int main()

{
    int n=7;
    int guess;
    int attempt=0;
    for (int i=1; i>=1; i++)
       { 
        cout << "Guess the number between 1 and 10: " ;
        cin >>guess;
        attempt = attempt + 1;
        if (guess!=n)
           {cout << "This is incorrect guess, try again" << endl;}
        else if (guess==n)
           {cout << "This is correct guess, you won the game" << endl;
            break;}
    }
    cout<< "number of attempts are: " << attempt << endl;
    return 0;
}