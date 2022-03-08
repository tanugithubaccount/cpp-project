// C++ implementation of the approach
#include <iostream>
using namespace std;
 
// Function to return the HCF of x and y
int getHCF(int x, int y)
{
 
    // Minimum of the two numbers
    int minimum = min(x, y);
 
    // If both the numbers are divisible
    // by the minimum of these two then
    // the HCF is equal to the minimum
    if (x % minimum == 0 && y % minimum == 0)
        return minimum;
 
    // Highest number between 2 and minimum/2
    // which can divide both the numbers
    // is the required HCF
    for (int i = minimum / 2; i >= 2; i--) {
 
        // If both the numbers
        // are divisible by i
        if (x % i == 0 && y % i == 0)
            return i;
    }
 
    // 1 divides every number
    return 1;
}
 
// Driver code
int main()
{
    int x = 16, y = 32;
    cout << getHCF(x, y);
 
    return 0;
}