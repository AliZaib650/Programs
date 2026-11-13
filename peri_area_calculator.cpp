#include <iostream>
using namespace std;

int main()
{
    double length;
    double width;
    double area;
    double perimeter;
    cout<< "Enter length of rectangle: ";
    cin>> length;
    cout<< "Enter width of rectangle: ";
    cin>> width;
    area=length*width;
    perimeter=2.0*(length+width);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    
    if(area>perimeter)
    {
        cout<< "Area is greater than perimeter";
    }
    else if(area<perimeter)
    {
        cout<< "Perimeter is greater than area";
    }
    else
    {
        cout<< "Area and perimeter are equal";
    }


}