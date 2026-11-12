#include <iostream>
using namespace std;

// 1. Correct function prototype (with semicolon)
int addNumbers(int a, int b); 

int main() {
    int a = 5, b = 10;
    
    // 2. Call the function and store the returned value
    int result = addNumbers(a, b); 
    
    cout << "Sum is: " << result << endl;
    return 0;
}

// 3. Complete and correct function definition
int addNumbers(int x, int y) {
    int sum = x + y;
    
    // Displaying the calculation inside the function safely
    cout << "Inside function (sum): " << sum << endl; 
    
    return sum;
}