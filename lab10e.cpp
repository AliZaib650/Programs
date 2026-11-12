#include<iostream>
using namespace std;

int main()
{
    int num[5];

    for (int i=0; i< 5; i++)
    {
        cout << "Enter number " << i+1 << ": ";
        cin >> num[i];
    }

    cout << "Array before sorting: ";

    for (int i=0; i< 5; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (num[j] > num[j + 1])
            {
                int temp   = num[j];
                num[j]     = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    cout << "Array after sorting: ";

    for (int i=0; i< 5; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}