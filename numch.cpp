#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    
   int num=5;

    for(int i=0; i<num; i++)
    {
        int n=1;
         
        char ch='A';
        for(int j=0; j<=i; j++)
        {
            if(i%2==1)
                {cout << setw(2) << ch;
                    ch++;}
            else
               {cout << setw(2) << n;
                n++;}
        }
        cout << endl;
    }


    return 0;
}