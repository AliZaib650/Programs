 
#include <iostream> 
#include <chrono> 
inline void cube(int x)
{
    std::cout<<x*x*x <<std::endl;
} 
 
 
int main() {     // Start the clock 
    auto start = std::chrono::high_resolution_clock::now(); 
 
    // Your program or code to be timed    
    cube(4); 
 
    // Stop the clock 
    auto stop = std::chrono::high_resolution_clock::now(); 
 
    // Calculate the duration 
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start); 
 
    // Print the execution time in microseconds 
    std::cout << "Execution Time: " << duration.count() << " microseconds" << std::endl; 
 
    return 0; 
} 
