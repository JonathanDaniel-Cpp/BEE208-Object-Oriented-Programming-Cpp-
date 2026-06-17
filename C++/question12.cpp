#include <iostream>

using namespace std;

int main() {
    int num;
    
    // Get integer from user
    cout << "Enter an integer: ";
    cin >> num;
    
    // Check if number is both odd AND divisible by 3 using logical AND
    if (num % 2 != 0 && num % 3 == 0) {
        cout << "Number is both odd and divisible by 3" << endl;
    } else {
        cout << "Number is NOT both odd and divisible by 3" << endl;
    }
    
    return 0;
}