# include <iostream>
using namespace std;

int factorial(int n)
{
    int factorial=1;
    for(int i=1; i<=n; i++)
    {
        factorial*=i;
    }
    return factorial;
}

int ncr(int n, int r)
{
    int fact_n= factorial(n);
    int factr_r=factorial(r);
    int factt_nr=factorial(n-r);
    
    return fact_n / (factr_r * factt_nr );
}
int main()
{
    int n=5 ,r=3;
    cout<< ncr(n, r);
    return 0;
}