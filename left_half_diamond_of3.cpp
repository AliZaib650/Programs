#include <iostream>
using namespace std;

int main()
{
    // Top half (including middle row)
    for (int i = 1; i <= 3; i++)
    {
        for (int s = 1; s <= 3 - i; s++)
            cout << "  ";

        for (int j = 1; j <= i; j++)
            cout << "3 ";

        cout << endl;
    }

    // Bottom half
    for (int i = 2; i >= 1; i--)
    {
        for (int s = 1; s <= 3 - i; s++)
            cout << "  ";

        for (int j = 1; j <= i; j++)
            cout << "3 ";

        cout << endl;
    }

    return 0;
}
