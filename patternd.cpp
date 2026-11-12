#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 6; i++)
    {
        for (int s = 1; s <= 6 - i; s++)
            cout << "  ";

        for (int j = 1; j <= i; j++)
            cout << j << " ";

        cout << endl;
    }

    return 0;
}