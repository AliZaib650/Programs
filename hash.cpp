#include <iostream>
using namespace std;

int main()
{
    int length;
    int width;
    int area;
    int perimeter;
    cout<< "Enter length of perimeter: ";
    cin>> length;
    cout<< "Enter width of rectangle: ";
    cin>> width;
    area=length*width;
    perimeter=2*(length+width);
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