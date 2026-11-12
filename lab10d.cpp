#include<iostream>
using namespace std;

int main()
{
    int numbers[8]={12, 4 , 45, 76, 23, 8, 43, 33,};
    int target;
    int position = -1;
    
    cout << "Array : ";
    for(int i=0; i< 8; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
    
    cout << "Enter a number to search : ";
    cin >> target;

    for(int i=0; i< 8; i++)
    {
        if(numbers[i]==target)
        {
            position = i;
            break;
        }
    }

    if(position!=-1)
    {
        cout << "Number " << target << " found at index " << position ; 
    }
    else{
        cout << "Number " << target << " not found";
    }
    return 0;
}