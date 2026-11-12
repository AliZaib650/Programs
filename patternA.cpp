#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=6; i++)
    {
        for(int j=1; j<=6; j++)
        {
            if(!(i==2 || i==3 || i==4 || i==5))
            {cout << j;}
            else{
                if(j>1 && j<6)
                { cout<< " ";}
                else{cout << j;}
            }
        }
        cout<< endl;
    }
    
    return 0;
}