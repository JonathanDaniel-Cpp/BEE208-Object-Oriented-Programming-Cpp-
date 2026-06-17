#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    // Get two integers from user
    cout << "Enter the first integer: ";
    cin >> num1;
    
    cout << "Enter the second integer: ";
    cin >> num2;
    
    // Use ternary operator to find the larger number
    int larger = (num1 > num2) ? num1 : num2;
    
    // Display result
    cout << "The larger number is: " << larger << endl;
    
    return 0;
}