#include <iostream>
using namespace std;

int main() {
    int n=5;

    for (int i=0;i<n; i++)
    {
        for (int j=0; j<i; j++)
        {
            cout << " ";
        }
        for(int s=0; s<n-i; s++)
        {
            cout << i+1;
        }
        cout << endl;
    }
    

    return 0;
}