#include<iostream>                // these are preprocessor directives
using namespace std;             // this is to specify namespace

int main()
{
    int duration;                   // declaring varialbes
    int hours;
    int minutes;
    int seconds;
    int remaining_seconds;
    int total_minutes;

    cout<< "Enter the duration in seconds: ";
    cin >> duration;                   // taking inut from user
    hours = duration / 3600;             // calculating hours
    remaining_seconds = duration % 3600;     // calculating remaining seconds
    minutes = remaining_seconds / 60;        // calculating minutes
    seconds = remaining_seconds % 60;        // calculating seconds
    total_minutes = duration / 60;           // calculating total minutes

    cout << "Duration: " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds" << endl;
    cout << "Total minutes: " << total_minutes << " minutes" << endl;    // showing output

    return 0;
}