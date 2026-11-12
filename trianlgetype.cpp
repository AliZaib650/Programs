#include <iostream>
using namespace std;

bool is_valid_triangle(double s1, double s2, double s3)
{
if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1)
    return true;
else
    return false;
}


string type(double s1, double s2, double s3)
{
    if(s1==s2 && s2==s3)
    return "equilateral.";
    else if(s1==s2 || s2==s3 || s1==s3)
    return "isosceles.";
    else
    return "scalene.";
}

int main()
{
    double side1, side2, side3;
    int n=1;

    while(n==1){

    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> side1 >> side2 >> side3;
     
    if(is_valid_triangle(side1, side2, side3))
    {
        cout << "The triangle is " << type(side1, side2, side3) << "." << endl;
        n++;
    }
    else
    {
        cout << "The given sides do not form a valid triangle." << endl;
    }}

    return 0;

}