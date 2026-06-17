#include <iostream>

using namespace std;

int main() {
    int num;
    
    // Get integer from user
    cout << "Enter an integer: ";
    cin >> num;
    
    // Check if number is odd using modulus operator
    if (num % 2 == 1 || num % 2 == -1) {
        cout << "Odd number" << endl;
    } else {
        cout << "Even number" << endl;
    }
    
    return 0;
}