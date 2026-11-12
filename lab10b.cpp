#include<iostream>
using namespace std;

int main()
{
    int marks[5];
    int total = 0;
    double average;
    int largest;
    int smallest;
    
    for(int i = 0; i<5; i++)
    {
        cout << "Enter marks of student " << i+1 << ": ";
        cin >> marks[i]; 
    }

    largest = marks[0];
    smallest = marks[0];

    for(int i=0; i<5; i++)
    {
        total +=marks[i];
        if(marks[i]<=smallest)
        {
            smallest = marks[i];
        }
        if(marks[i]>=smallest)
        {
            largest = marks[i];
        }
    }

    cout << "Total   : " << total << endl;
    cout << "Average : " << average << endl;
    cout << "Largest : " << largest << endl;
    cout << "Smallest: " << smallest << endl;
    return 0;
}