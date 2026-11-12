#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const double PI = 3.14159;
    double s, r, area;

    cout << "Enter the length of centre to vertex of pentagon(r): ";
    cin >> r;

    if ((r>=0))
    {
        s = 2*r*sin(PI/5);
    area = (5*s*s) / (4*tan(PI/5));

    cout << fixed << setprecision(2);
    cout << "Area of Pentagon is: " << area;
}

else{
    cout << "Invalid Input, Length cant be negative.";
}

    return 0;
}