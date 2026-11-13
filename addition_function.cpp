#include <iostream>
using namespace std;


int addNumbers(int a, int b); 

int main() {
    int a = 5, b = 10;
    
    
    int result = addNumbers(a, b); 
    
    cout << "Sum is: " << result << endl;
    return 0;
}
int addNumbers(int x, int y) {
    int sum = x + y;
   
    cout << "Inside function (sum): " << sum << endl; 
    
    return sum;
}