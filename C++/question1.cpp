#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    
    // Get input from user
    cout << "Enter the first integer: ";
    cin >> num1;
    
    cout << "Enter the second integer: ";
    cin >> num2;
    
    // Perform arithmetic operations
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    
    // Display results
    cout << "\n--- Results ---" << endl;
    cout << "Sum: " << num1 << " + " << num2 << " = " << sum << endl;
    cout << "Difference: " << num1 << " - " << num2 << " = " << difference << endl;
    cout << "Product: " << num1 << " * " << num2 << " = " << product << endl;
    
    // Quotient with division by zero check
    if (num2 != 0) {
        int quotient = num1 / num2;
        cout << "Quotient: " << num1 << " / " << num2 << " = " << quotient << endl;
    } else {
        cout << "Quotient: Division by zero is not allowed" << endl;
    }
    
    return 0;
}