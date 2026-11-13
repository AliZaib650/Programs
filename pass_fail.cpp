#include<iostream>
using namespace std;


void showresult(int score)
{
    bool isPassed = score > 50;
    int x = isPassed; // Convert boolean to integer (1 for true, 0 for false)
    switch (x) 
    {
    case 1:  // Evaluates if score > 50 is true (1)
        cout << "Passed!";
        break;
    case 0: // Evaluates if score > 50 is false (0)
        cout << "Failed!";
        break;
        default:
            cout << "Invalid score!";    
}

}

int main()
{

    int marks;
    cout << "Enter your marks: ";
    cin >> marks;
    showresult(marks);






return 0;
}