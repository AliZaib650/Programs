#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void runGameSimulator(int &currentposition, int& target);
int rolldice();
int turnplay(int dice, int& currentposition);
int main()
{
    srand(time(0));
    int currentposition = 0;
    int target = 100;
    int n;
    cout << endl;
    cout << endl;
    cout << "==================================================" << endl;
    cout << "========= WELCOME TO ROLL DICE SIMULATOR =========" << endl;
    cout << "==================================================" << endl;
    cout << endl;
    cout << "Enter 1 to continue to game, 0 to exit from game: ";
    cin >> n;
    
    while(n!=0)
    {
        if (n==1)
        {
            cout << "WELCOME TO GAME!!!!" << endl;
            runGameSimulator(currentposition, target);
            if(currentposition == target)
            {
            currentposition = 0;
            cout << "Press 1 to replay game, 0 to exit from game: ";
            cin >> n;
            }
        }
        else
        {
        cout << "You entered an invalid input, Please choose from given options!!!";
        cout << "Enter 1 to continue to game, 0 to exit from game: ";
        cin >> n;
    }
    }
    

    cout << "You exited the game succesfully!" << endl;
    cout << "Have a nice day!!" << endl;

    return 0;
}
int rolldice()
{
    return 1 + rand() % 6;
}
void runGameSimulator(int &currentposition, int& target)
{
    while(currentposition < target)
    {
    int dice;
    char random;
    cout << "Please press any character and then ENTER to roll dice : ";
    cin >> random;
    dice = rolldice();
    currentposition = turnplay(dice, currentposition);
    if(currentposition == target)
    {
        cout << "You won the Game!!!!" << endl;
        cout << "Congratulations " << endl;
    }
    }
}
int turnplay(int dice, int& currentposition)
{
    currentposition +=dice;
    if(dice == 6)
    {
        cout << "Wow!! You rolled a 6, you will get a bonus of 2." << endl;
        currentposition +=2;
        if(currentposition>100)
        {currentposition = 100;}
        cout << "your current position is now: " << currentposition << endl;
    }
    if(currentposition % 9 == 0)
    {
        cout << "OOOPS! you landed at a trap. HAHAHAHA.........." << endl;
        currentposition -=15;
        if(currentposition<0)
        {currentposition = 0;}
        cout << "your current position is reseted again to " << currentposition << endl;
    }
    else if(currentposition % 20 == 0 && currentposition < 80)
    {
        currentposition +=10;
        if(currentposition>100)
        {currentposition=100;}
        cout << "Congratulations!!!!! You unlocked a treasure box!" << endl;
        cout << "Your currentposition boosted to " << currentposition << endl;;
    }
    else
    {
        cout << "You rolled a " << dice <<  endl;
        if(currentposition>100)
        {currentposition=100;}
        cout << "Your current position is " << currentposition << endl;
    }
    return currentposition;
}