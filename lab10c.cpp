#include<iostream>
using namespace std;

int main()
{
    int numbers[6] = {10, 20, 30, 40, 50, 60};
    int index=0;
    int value;

    cout << "Array : ";
    for(int i=0; i<=5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Enter the index to change(0 to 5): ";
    cin >> index;
    while (index <0 || index >5)
    {
        cout << "Invalid index!!" << endl;
        cout << "Enter the index to change(0 to 5): ";
        cin >> index;

    }

    cout << "Current value at index " << index << " is " << numbers [index] << endl;

    cout << "Enter the new value: ";
    cin >> value;

    numbers[index] = value;
    cout << "Updated array : ";

    for(int i=0; i<=5; i++)
    {
        cout << numbers[i] << " ";
    }
    return 0;
}