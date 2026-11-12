#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int s = 1; s <= (i <= 3 ? 3 - i : i - 3); s++)
            cout << "  ";

        for (int j = 1; j <= (i <= 3 ? i : 6 - i); j++)
            cout << "3 ";

        cout << endl;
    }

    return 0;
}