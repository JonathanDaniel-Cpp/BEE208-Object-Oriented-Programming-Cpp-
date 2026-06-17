#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    
    // Get two floating point numbers from user
    cout << "Enter the first floating point number: ";
    cin >> num1;
    
    cout << "Enter the second floating point number: ";
    cin >> num2;
    
    // Use conditional operator to find the larger number
    double larger = (num1 > num2) ? num1 : num2;
    
    // Display result
    cout << "The larger number is: " << larger << endl;
    
    return 0;
}