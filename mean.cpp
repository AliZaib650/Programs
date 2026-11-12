#include <iostream>
using namespace std;

int main()
{
    int n;
    float num;
    float reci;
    float mean;
    float sum=0;
    int i=0;

    cout<< "How many numbers do you want to calculate the mean of: ";
    cin >> n;
    
    do
    {
    cout << "Enter the number: ";
    cin >> num;

    if(num==0){
        cout<< "You can't enter 0" << endl;
        continue;
    }
    reci = 1/num;
    sum= sum + reci;
    i++;

    } while (i<n);

    mean = n/sum;
    cout << "The mean of numbers is: " << mean;
    

    return 0;
}