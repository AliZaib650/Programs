#include <iostream>
using namespace std;

int main()
{
    float x1;
    float y1;
    float x2;
    float y2;

    cout << "Enter the coordinates of the first point (x1, y1): ";
    cin >> x1 >> y1; 
    cout << "Enter the coordinates of the second point (x2, y2): ";
    cin >> x2 >> y2;
    
    float slope= (y2 - y1) / (x2 - x1);
    
    cout << "The slope of the line is: " << slope << endl;
    return 0;
}