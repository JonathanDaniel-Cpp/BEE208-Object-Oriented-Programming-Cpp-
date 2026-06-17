#include <iostream>

using namespace std;

int main() {
    int a, b;
    
    // Get two integers from user
    cout << "Enter the first integer: ";
    cin >> a;
    
    cout << "Enter the second integer: ";
    cin >> b;
    
    // Display values before swap
    cout << "\nBefore swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    // Swap using bitwise XOR operator
    a = a ^ b;      // a now contains a XOR b
    b = b ^ a;      // b now contains a (because b XOR (a XOR b) = a)
    a = a ^ b;      // a now contains b (because (a XOR b) XOR a = b)
    
    // Display values after swap
    cout << "\nAfter swap:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    
    return 0;
}