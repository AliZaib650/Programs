# include <iostream>
using namespace std;

int main()
{
    int n=4;
     for(int i=0; i<n; i++)
     {
        for(int j=0; j<=n-i-1; j++)
        {
            cout<< " ";

        }
        for(int s=0; s<=i; s++){
            cout<< "*";

        }
        cout<< endl;
     }



    return 0;
}
